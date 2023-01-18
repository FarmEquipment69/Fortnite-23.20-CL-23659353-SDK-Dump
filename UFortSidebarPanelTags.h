// Class /Script/FortniteUI.FortSidebarPanelTags
// Size: 0x478
class UFortSidebarPanelTags : public UFortSidebarPanelWithTree
{
	class UFortSocialUserTreeView* UserTreeFriends; // 0x3d8 (0x8)
	class UFortSidebarLfgState2Widget* LfgStateWidget; // 0x3e0 (0x8)
	float QueryLfgTimeSeconds; // 0x3e8 (0x4)
	float DebounceLfgTimeSeconds; // 0x3ec (0x4)
	float RateLimitTickSeconds; // 0x3f0 (0x4)
	bool bLfgExactMatch; // 0x3f4 (0x1)
	unsigned char unreflected_3f5[0x3]; // 0x3f5 (0x3) 
	int MaxNumberOfPlayersToShow; // 0x3f8 (0x4)
	unsigned char padding_3fc[0x7c]; // 0x3fc (0x7c)
};

