// ScriptStruct /Script/FortniteGame.FortControllerMiniMapComponentVisibility
// Size: 0x20
struct FFortControllerMiniMapComponentVisibility : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UFortMiniMapComponent_Discoverable* MiniMapComponent; // 0x10 (0x8)
	enum EMiniMapComponentDiscoverableVisibility Visibility; // 0x18 (0x1)
	unsigned char padding_19[0x7]; // 0x19 (0x7)
};

