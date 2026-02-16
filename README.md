# minishell-parser
A custom shell parser written in C as part of the Minishell project at 42 Berlin.

<details>
<summary>English</summary>
The project implements a parser for a simplified bash-like shell.
It is responsible for analyzing user input and transforming it into a structured data representation ready for execution.
  
The parser supports:
•	pipe operators (|)
•	input and output redirections (<, >, >>, <<)
•	single and double quotes (', ")
•	environment variables
  
The parsing process consists of:
1.	Tokenizing the user input.
2.	Performing syntactic analysis on generated tokens.
3.	Constructing a linked list structure representing commands along with their redirections and pipelines.

The main objective of the project was to understand lexical and syntactic analysis mechanisms in the context of shell implementation.
</details>


  

