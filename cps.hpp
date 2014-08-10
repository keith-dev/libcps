#ifndef CPS_HPP
#define CPS_HPP

#include <string>
#include <list>

namespace cps
{
	struct entry_t
	{
		std::string	location;
	};
	typedef std::list<entry_t> playlist_t;

	playlist_t playlistLoad(const std::string& filename);
}

#endif
