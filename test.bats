#!/usr/bin/env bats


TEST1=`cat <<EOF
Enter number of records: Enter the student id,name of the subject and marks respectively:
Enter the student id,name of the subject and marks respectively:
Displaying Student Information:
Student ID: 14567234
C-Programming	92
Student ID: 12365432
Structures	87
EOF
`

@test "structures" { 
  result="$(echo 2 14567234 C-Programming 92 12365432 Structures 87 | ./structure)"
  echo $TEST1
  echo '-------------'
  echo $result
  [ "$result" = "$TEST1" ]
}
