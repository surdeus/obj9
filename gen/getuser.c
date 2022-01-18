#include <9/u.h>
#include <pwd.h>
#include <9/c.h>

char*
getuser(void)
{
	static char user[64];
	struct passwd *pw;

	pw = getpwuid(getuid());
	if(pw == nil)
		return "none";
	strecpy(user, user+sizeof user, pw->pw_name);
	return user;
}
