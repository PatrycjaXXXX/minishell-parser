# minishell-parser
A custom shell parser written in C as part of the Minishell project at 42 Berlin. (project passed on April 10, 2025, with 101%)

<div align="left">
  <p><b>graphical representation: pipeline with three commands (cat, grep, wc)</b></p>
  <img src="./images/catgrepwc.png" alt="example use with three commands: cat, grep and wc" height="320px" style="margin-bottom:40px;">
</div>


<div align="left">
  <p><b>graphical representation: command with multiple redirections (whitespaces are of course ignored and there can be any number of them)</b></p>
  <img src="./images/redir.png" alt="example use with many redirections" height="320px" style="margin-bottom:40px;">
</div>

<details>
<summary><b>English</b></summary>
<p>The project implements a parser for a simplified bash-like shell.
It is responsible for analyzing user input and transforming it into a structured data representation ready for execution.</p>
<p>Together with my project partner, we decided early not to implement the Minishell bonus part. As a result, we chose a simpler parsing strategy based on linked lists instead of a tree-based structure.</p>
<p>
  The parser supports:
<ul>
  <li>pipe operators (|)</li>
  <li>input and output redirections (<, >, >>, <<)</li>
  <li>single and double quotes (', ")</li>
  <li>environment variables</li>
</ul>
</p>
<p>
  The parsing process consists of:
<ol>
<li>Tokenizing the user input.</li>
<li>Performing syntactic analysis on generated tokens.</li>
<li>Constructing a linked list structure representing commands along with their redirections and pipelines.</li>
</ol>
</p>
<p>The main objective of the project was to understand lexical and syntactic analysis mechanisms in the context of shell implementation.</p>
</details>

<details>
<summary><b>Polish</b></summary>
<p>Projekt implementuje parser dla uproszczonej powłoki systemowej typu bash-like.
Odpowiada za analizę wejścia użytkownika oraz przekształcenie go w uporządkowaną strukturę danych gotową do dalszego etapu wykonania.</p>
<p>Razem z moim partnerem Minishell wcześnie zdecydowaliśmy, że nie będziemy implementować części bonusowej projektu. W efekcie wybraliśmy prostszą strategię parsowania opartą na listach jednokierunkowych zamiast AST.</p>
<p>
  Parser obsługuje:
<ul>
  <li>operatory potoków (|)</li>
  <li>przekierowania (<, >, >>, <<)</li>
  <li>obsługę cudzysłowów (', ")</li>
  <li>ekspansję zmiennych środowiskowych</li>
</ul>
</p>
<p>
Proces działania obejmuje:
<ol>
<li>Tokenizację wejścia użytkownika.</li>
<li>Analizę składniową wygenerowanych tokenów.</li>
<li>Budowę struktury danych (lista jednokierunkowa), reprezentującej argumenty wraz z ich przekierowaniami oraz potokami</li>
</ol>
</p>
<p>Celem projektu było zrozumienie mechanizmów analizy leksykalnej i składniowej w kontekście działania powłoki systemowej.</p>
</details>


  

