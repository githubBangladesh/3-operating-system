### Setting up a repository ###
###############################

# Step: 01
echo 
echo 1. Done...Initializing a new Git repo for this project.
git init

# Step: 02
echo
echo 2. Done...Saving changes to the repository.
git add .

# Step: 03
echo 3. Done...Committing a modified version of a file to the repo.
echo 
git commit -m "Updating Project : v3.1--14-05-2017"

git config --global user.email "sakib.rahman.0000@gmail.com"
git config --global user.name "Sakib Rahman"

# Step: 04
# List your existing remotes in order to get the name of the remote you want to change.
echo
echo 4. Done...checking remote origin.
echo
git remote -v

# Step: 05
# Change your remote's URL from SSH to HTTPS with the git remote set-url command.
echo
echo 5. Done...setting remote url.
git remote set-url origin https://github.com/Sakib-Rahman-Bangladesh/3-operating-system

# Step: 06
# Verify that the remote URL has changed.
echo 6. Done...Verifying remote URL.
echo
git remote -v

echo
git push origin master
git push --all -f https://github.com/Sakib-Rahman-Bangladesh/3-operating-system


#git pull https://github.com/githubBangladesh/operating-system