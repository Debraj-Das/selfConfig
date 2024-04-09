# Learning basic of the Git
## To show the status of git reprository
    `git status`

## Set up configuration for git reprository (local and global)
    * **local (for particular git reprository)**
        `git config --local user.name "user name"`
        `git config --local user.email "user email"`
        `git config --local --list`   (show the list of configuration)
        git config --local --edit   (open the config file in vim editor for edit)

    * **global (for all git reprository)**
        git config --global user.name "user name"
        git config --global user.email "user email"
        git config --global --list   (show the list of configuration)
        git config --global --edit   (open the config file in vim editor for edit)

## To intialize git reprository
    git init

    * To initialize git reprository with name
        git init <git reprository name>
        (e.g git init .git-reprository)
        (by default git reprository name is .git)

    * To initialize git reprository with name and description and main branch
        git init --initial-branch=<branch name> --description="<description>" <git reprository name>
        (e.g git init --initial-branch=master --description="this is git reprository" .git-reprository)
        (by default git reprository name is .git)
        (by default branch name is master)
    
## To add files to git reprository
    git add <file name>

    * To add all files to git reprository 
        git add .
    
    * To add all files to git reprository with extension
        git add *.extension
    
    * To add all files to git reprository with extension in all subfolders
        git add **/*.extension
    
    * To add all files to git reprository with extension in all subfolders and subfolders of subfolders
        git add **/**/*.extension
    (similarly you can use **/**/**/*.extension etc.)
    
    * To remove the file from the stage area
        git reset <file name>
    
    * To remove all the files from the stage area
        git reset

## To commit files to git reprository or edited the previous commit message
    git commit -m "commit message"
    (if you forget to add -m "commit message" then it will open vim editor to add commit message)

    * edited the previous commit message
        git commit --amend -m "commit message"
    
    * edited one praticular commit message
        git commit --amend <commit hash>

## To push files to git reprository
    git push origin master/<branch name>
    
    *if you want to push branch into difference (old/new) branch then use below command)
        git push origin <branch name>:<remote branch name>

## To pull files from git reprository
    git pull origin
    (default branch is remote master branch and local master branch)

    * pull the any remote branch to local branch
        git pull origin <remote branch name>:<local branch name>

## To clone git reprository
    git clone <git reprository url>

## To create new branch
    git branch <branch name>
    (if you want to create branch and switch to that branch then use below command)
    git checkout -b <branch name>

## To switch to branch
    git checkout <branch name>

## To merge branch
    git merge <branch name>
    (if you want to merge branch to master branch then switch to master branch and use above command)

## To delete branch
    git branch -d <branch name>
    (if you want to delete branch forcefully (unmerge branch) then use below command)
    git branch -D <branch name>

    * To delete branch from remote 
        git push origin --delete <branch name>
        (similarly if you want to delete branch forcefully (unmerge) from remote then use below command)
        git push origin --delete --force <branch name>

## To see all branches
    git branch -a

    * To see all branches with last commit
        git branch -v

    * To see all branches with last commit and last commit message
        git branch -vv

    * To see all branches with last commit and last commit message and last commit author
        git branch -vvv

    * To see all branches with last commit and last commit message and last commit author and last commit date
        git branch -vvvv

    * To see all branches with last commit and last commit message and last commit author and last commit date and last commit hash
        git branch -vvvvv

## To see the log of git reprository
    git log
    (you can beautify log by using below command)
    git log --oneline --graph --decorate --all
    (also there are many other options to beautify log)

    * To see the log of git reprository with last commit
        git log -1

    * To see the log of git reprository with last commit and last commit message
        git log -1 --oneline

    * To see the log of git reprository with last commit and last commit message and last commit author
        git log -1 --oneline --author="author name"

    * To see the log of git reprository with last commit and last commit message and last commit author and last commit date
        git log -1 --oneline --author="author name" --date="format"

## To remove the git reprository
    rm -rf .git

    * To remove the git reprository from remote
        git remote remove origin

    * To rename the git reprository
        git remote rename origin <new name>

    * To add new remote
        git remote add <remote name> <git reprository url>

    * To see all remotes
        git remote -v

    * To edit the git reprository url
        git remote set-url <remote name> <git reprository url>

## To see the difference between two branches
    git diff <branch name>..<branch name>
    (if you want to by vim editor then use below command)
    git difftool <branch name>..<branch name>
    (for use vscode as difftool use)
    gitlens (extension) (run the git compare command from vscode command palette)

    * To see the difference between two branches with last commit
        git diff <branch name>..<branch name> -1
    (similarly you can use -2, -3, -4, -5, -6, -7, -8, -9, -10)
    (if you want to by vim editor then use below command)
        git difftool <branch name>..<branch name> -1

    * To see the difference between two last commit of any branch
        git diff <branch name>..<branch name> -1 -1   

## change the name of branch
    git branch -m <old branch name> <new branch name>

## Compare the Two commit with each other
    git diff <commit hash>..<commit hash>
    (if you want to by vim editor then use below command)
    git difftool <commit hash>..<commit hash>

    * To see the difference between two commit with last commit
        git diff <commit hash>..<commit hash> -1
    (similarly you can use -2, -3, -4, -5, -6, -7, -8, -9, -10)
    (if you want to by vim editor then use below command)
        git difftool <commit hash>..<commit hash> -1

    * To see the difference between two last commit of any branch
        git diff <commit hash>..<commit hash> -1 -1

## Go to previous the commit status 
    * To go to previous the commit status of any file
        git checkout <commit hash> <file name>

    * To go to previous the commit status of all files
        git checkout <commit hash>

    * Go to previous commit and create new branch and switch to that branch
        git checkout -b <branch name> <commit hash>

    * Go to previous commit and create new branch and switch to that branch 
        git checkout -b <branch name> <commit hash>

    * To go to previous the commit status of any modified files
        git checkout <file name>

    * To go to previous the commit status of all modified files
        git checkout .

## To see the difference between current stage and the last commit
    * To see the difference between the stage and the last commit
        git diff --staged

    * To see the difference between the modified and the last commit
        git diff

    * To see the difference between the modified and the stage
        git diff --cached

    * To see the difference between the modified and the stage and the last commit
        git diff HEAD

    * To see the difference between the modified and the stage and the last commit with last commit
        git diff HEAD -1
    
    * To see the difference between the modified and the stage and the last commit with last commit and last commit message
        git diff HEAD -1 --oneline

## To untracked any file
    * if you are not tracked before than add that files into .gitignore file
    (.gitignore file is used to ignore the files which you don't want to track)

    * if intialize you track that file then use below command
        git rm --cached <file name>
        (then add that file into .gitignore file)

