const mainBranchCheckbox = document.querySelector('#main-branch');
const branchCheckbox = document.querySelector('#other-branch');

mainBranchCheckbox.addEventListener('change', showBranch);
branchCheckbox.addEventListener('change', showBranch);

function showBranch() {
  let branches;
  const activeBranch = document.querySelector('.branch.active');

  if (mainBranchCheckbox.checked) {
    branches = document.querySelectorAll('.branch:not(.active)');
    branches.forEach((div) => {
      div.style.opacity = 0;
    });
  } else {
    branches = document.querySelectorAll('.branch');
    branches.forEach((div) => {
      div.style.opacity = 1;
    });
  }

  if (branchCheckbox.checked) {
    activeBranch.style.opacity = 0;
  } else {
    activeBranch.style.opacity = 1;
  }
}
