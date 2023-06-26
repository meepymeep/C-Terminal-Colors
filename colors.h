#pragma once

// reset
#define RESET "\e[0m"

// default colors
#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"
#define WHITE "\e[0;37m"

// bold colors
#define BBLACK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGREEN "\e[1;32m"
#define BYELLOW "\e[1;33m"
#define BBLUE "\e[1;34m"
#define BPURPLE "\e[1;35m"
#define BCYAN "\e[1;36m"
#define BWHITE "\e[1;37m"

// underlined colors
#define UBLACK "\e[4;30m"
#define URED "\e[4;31m"
#define UGREEN "\e[4;32m"
#define UYELLOW "\e[4;33m"
#define UBLUE "\e[4;34m"
#define UPURPLE "\e[4;35m"
#define UCYAN "\e[4;36m"
#define UWHITE "\e[4;37m"

// background colors
#define BGBLACK "\e[40m"
#define BGRED "\e[41m"
#define BGGREEN "\e[42m"
#define BGYELLOW "\e[43m"
#define BGBLUE "\e[44m"
#define BGPURPLE "\e[45m"
#define BGCYAN "\e[46m"
#define BGWHITE "\e[47m"

// high intensity colors
#define HIBLACK "\e[0;90m"
#define HIRED "\e[0;91m"
#define HIGREEN "\e[0;92m"
#define HIYELLOW "\e[0;93m"
#define HIBLUE "\e[0;94m"
#define HIPURPLE "\e[0;95m"
#define HICYAN "\e[0;96m"
#define HIWHITE "\e[0;97m"

// high intensity bold colors
#define HIBBLACK "\e[1;90m"
#define HIBRED "\e[1;91m"
#define HIBGREEN "\e[1;92m"
#define HIBYELLOW "\e[1;93m"
#define HIBBLUE "\e[1;94m"
#define HIBPURPLE "\e[1;95m"
#define HIBCYAN "\e[1;96m"
#define HIBWHITE "\e[1;97m"

// high intensity background colors
#define HIBGBLACK "\e[0;100m"
#define HIBGRED "\e[0;101m"
#define HIBGGREEN "\e[0;102m"
#define HIBGYELLOW "\e[0;103m"
#define HIBGBLUE "\e[0;104m"
#define HIBGPURPLE "\e[0;105m"
#define HIBGCYAN "\e[0;106m"
#define HIBGWHITE "\e[0;107m"

/*
	How to use:
	-----------

	printf( {color} "Hello world!\n" RESET);

		- reset resets the color of the text
		- back to white.

	- you can add the background color of text to the beginning of the printf statement, or end for
	- some reason.
*/
