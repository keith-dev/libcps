#ifndef CPS_HPP
#define CPS_HPP

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
