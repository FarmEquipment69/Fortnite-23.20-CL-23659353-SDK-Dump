// Class /Script/FortniteGame.PlaylistUserOptions
// Size: 0x58
class UPlaylistUserOptions : public UDataAsset
{
	bool bSupportNoOverride; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<class UPlaylistUserOptionBase*> Options; // 0x38 (0x10)
	struct TArray<class UClass*> OptionFilters; // 0x48 (0x10)
};

