# Lab-3
WEEK 3: Problem Solving Agents & SEARCH
The Game :
According to the “Six Degrees of Kevin Bacon” game, anyone in the Hollywood film 
industry can be connected to Kevin Bacon within six steps, where each step consists of 
finding a film that two actors both starred in. To solve the problem, find the shortest path 
between any two actors by choosing a sequence of movies that connects them. For 
example, the shortest path between Jennifer Lawrence and Tom Hanks is 2: 
Jennifer Lawrence is connected to Kevin Bacon by both starring in “X-Men: First 
Class,” and Kevin Bacon is connected to Tom Hanks by both starring in “Apollo 13.”<br><br>
<strong>Problem Solving Agent:</strong><br>
Given two actors nodes in the graph we need to find the distance (shortest path) 
between the nodes.<br><br> 
Write a python program to determine how many “degrees of separation” apart two 
actors are. Find the distance or the degree of separation., using <br>
a. Breadth first search<br>
b. Depth first search<br><br>
<strong>Distribution Code: </strong>
Data & Download the distribution code from: 
https://cdn.cs50.net/ai/2020/x/projects/0/degrees.zip<br><br>
The distribution code contains two sets of CSV data files: one set in the large directory and 
one set in the small directory. Use the small dataset for ease of testing and 
experimentation. Each dataset consists of three CSV files.<br>
1. <strong>small/people.csv:</strong> each person has a unique id, corresponding with their id in 
IMDb’s database. They also have a name, and a birth year.<br>
2. <strong>small/movies.csv:</strong> You’ll see here that each movie also has a unique id, in addition 
to a title and the year in which the movie was released.<br>
3. <strong>small/stars.csv:</strong> This file establishes a relationship between the people in 
people.csv and the movies in movies.csv. Each row is a pair of a person_id value 
and movie_id value. <br><br>
For example: The first row (ignoring the header), for example, states that the person 
with id 102 starred in the movie with id 104257. Checking that against people.csv and 
movies.csv, you’ll find that this line is saying that Kevin Bacon starred in the movie “A 
Few Good Men.”<br>
4.<strong>degrees.py:</strong>
At the top, several data structures are defined to store information from the CSV 
files. The names dictionary is a way to look up a person by their name: it maps names 
to a set of corresponding ids (because it’s possible that multiple actors have the same 
name). The people dictionary maps each person’s id to another dictionary with values 
for the person’s name, birth year, and the set of all the movies they have starred in. 
And the movies dictionary maps each movie’s id to another dictionary with values for 
that movie’s title, release year, and the set of all the movie’s stars. The load_data 
function loads data from the CSV files into these data structures.<br><br>
The main function in this program first loads data into memory (the directory from 
which the data is loaded can be specified by a command-line argument). Then, the 
function prompts the user to type in two names. The person_id_for_name function 
retrieves the id for any person (and handles prompting the user to clarify, in the event 
that multiple people have the same name). The function then calls the shortest_path 
function to compute the shortest path between the two people, and prints out the 
path.<br><br>
<strong>The shortest_path function has to be coded using <br>
a.Breadth First Search<br>
b.Depth First Search</strong>
