## ONPU Operating Systems, CS, Lab 3 [![Visits Badge](https://badges.pufler.dev/visits/exposedcat/onpu-os-lab-3)](https://github.com/ExposedCat/onpu-os-lab-3)  
Variant: **2**  

<br>
<hr>
<h2>⭐️ Lab 3</h2>
<hr>
<h1>Text data processing using *NIX CLI</h1>
All files in this repository were created as a result of laboratory work on the course «Operating Systems»  

<b>Project team</b>:  
<ol>
    <li>Prokop A.S., student, AI-212</li>
    <li>Blazhko O.A., Associate Professor in the Department of Information Systems of State University «Odessa Polytechnic»</li>
    <li>Unknown cute cat</li>
</ol>
<img src="https://fotovmire.ru/wp-content/uploads/2019/03/11806/kot-polozhil-mordu-na-stol.jpg" alt="Definitely required here cat">

---
## ⭐️ Creating copy
---
### ⁠Task #2
1.1. `pwd`  
1.2. `whoami`  
1.3. `git config --global user.name`  
1.4. `date +%D`  
1.5. `dirs -v`  
1.6. `pushd ~/Development/ONPU/OS/onpu-os-lab-1`  
1.7. `ls -la --sort=size`  
1.8. `cd .git`  
1.9. `popd`  
Make screenshots  
  
### Task #2
2.1. `vim ~/.zshrc`  
2.2. Switch to INSERT mode: press `i`  

❗️ In points 2.2. to 2.6. replace `WORDn` with corresponding word from table by your variant.  

2.3. Add alias: `alias `WORD1`="mkdir "`  
2.4. Add alias: `alias `WORD2`="touch "`  
2.5. Add alias: `alias `WORD3`="rm -r "`  
2.6. Add alias: `alias `WORD4`="cat "`  
2.7. Switch to NORMAL mode: press `Esc`  
2.8. Save end exit: press `Z` twice (capital, with shift)  

### Do task #3
3.1. `mkdir -p ~/ONPU/OS/onpu-os-lab-3`  
3.2. `cd ~/ONPU/OS/onpu-os-lab-3`  
3.3. `git init`  
3.4. `cat << EOF > `NAME`_1`  
FULL NAME  
`EOF`  
3.5. `echo 'AI-212' >> `NAME`_1`  
3.6. `echo "$(pwd)\n$(whoami)" > `NAME`_2`  
3.7. `cat `NAME`_1 `NAME`_2 >> `FULLNAME`.cat.txt`  
3.8. `paste -s `NAME`_2 `NAME`_1 >> `FULLNAME`.paste.txt`  
Make screenshots  

### Do task #4
4.1. `dirs | tr ' ' '\n'`  
4.2. `dirs | tr ' ' '\n' | tr '/' '\n'`  
4.3. `dirs | tr ' ' '\n' | tr '/' '\n' | awk '{ print length(), $0 }' | sort -nu | sed 's/^[0-9]* //g'`  
4.4. `dirs | tr ' ' '\n' | tr '/' '\n' | awk '{ print length(), $0 }' | sort -nu | sed 's/^[0-9]* //g' | head -n 5  `  
4.5. `dirs | tr ' ' '\n' | tr '/' '\n' | awk '{ print length(), $0 }' | sort -nu | sed 's/^[0-9]* //g' | head -n 5 | wc -lL`  
Make screenshots  

### Do task #5
5.1. Copy all screenshots to the directory of Git repository created in point 2.3.  
5.2. Create README.md file in same directory as in 5.1.  
5.3. Create empty GitHub repository (do not choose init-with-readme option)  
5.4. Connect created remote repository to public using commands shown on homepage of new GitHub repository  
5.5. Go to local repository directory  
5.6. Stage all files in local repository: `git add .`  
5.7. Commit all changes in local repository: `git commit -m '⭐️ Add lab screenshots'`  
5.8. Push local commits to remote repository: `git push`  
5.9. Make screenshot
5.10. Repeat points 5.6. to 5.8.

🎯 Done