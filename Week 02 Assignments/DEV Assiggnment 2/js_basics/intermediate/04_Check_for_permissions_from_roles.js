//Check for permissions from roles

let roles = { 
  admin: ["read", "write"], 
  user: ["read"], 
  staff: ["write"] 
};

let checkRole = "user";
let action = "write";
let hasPermission = roles[checkRole]?.includes(action) ?? false;

console.log(hasPermission); 