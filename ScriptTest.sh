#! /bin/bash

BINARY="language"
OUTPUT=""

echo '====== Begin Test Binary ======'
make
if [[ -f "$BINARY" ]]; then
    echo "make: Success"
else
    echo "make: failed, review your code"
    exit 84
fi

echo "==== Test 1 ===="

OUTPUT=$( ./"$BINARY" "Just because I don't care doesn't mean I don't understand!" a )


if [[ "$OUTPUT" != $'a: 4 (6.897%)' ]]; then
    echo "First Test failed";
    exit 84
else
    echo "First Test Success";
fi

echo '==== Unit Test ===='
OUTPUT=$(make unittest)
eval ./test
make fclean