          global    main
          extern    printf
main:
	  mov   edi, formatwow
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
formatwow: db `Hello, Holberton`,0xa,0
