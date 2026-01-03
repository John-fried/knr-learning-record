#!/bin/bash

if [ "$#" -lt 3 ]; then
    echo "Usage: knr <chapter> <section> [-e | --exercise <val>] [-d | --description <val>] <name>"
    exit 1
fi

CHAPTER=$(printf "%02d" "$1")
SECTION=$(printf "%02d" "$2")
EXERCISE="00"
DESCRIPTION="No Description"
HAS_EXERCISE=false
NAME=""

shift 2

while [[ "$#" -gt 0 ]]; do
    case "$1" in
        -e|--exercise)
            EXERCISE=$(echo "$2" | sed 's/\./_/g')
            HAS_EXERCISE=true
            shift 2
            ;;
        -d|--description)
            if [ "$HAS_EXERCISE" = false ]; then
                echo "Error: --description requires --exercise flag."
                exit 1
            fi
            DESCRIPTION="$2"
            shift 2
            ;;
        *)
            NAME="$1"
            shift
            ;;
    esac
done

FILENAME="c${CHAPTER}_s${SECTION}_e${EXERCISE}_${NAME}.c"
DATE=$(date +"%Y-%m-%d %H:%M:%S")

read -p "Save as $FILENAME? (Y/n): " CONFIRM
if [[ "$CONFIRM" =~ ^[Nn]$ ]]; then
    echo "Aborted."
    exit 1
fi

EX_INFO="No exercises"
if [ "$HAS_EXERCISE" = true ]; then
    EX_INFO="${CHAPTER}-${EXERCISE} | ${DESCRIPTION}"
fi

cat <<EOF > "$FILENAME"
/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: ${CHAPTER}
 *      Exercises: ${EX_INFO}
 *      Created Date: ${DATE}
 *
 * With filename: ${FILENAME}
 */

/* Include something here */

int main()
{
	/* Code goes here */
	return 0;
}
EOF

echo "Success: $FILENAME"
