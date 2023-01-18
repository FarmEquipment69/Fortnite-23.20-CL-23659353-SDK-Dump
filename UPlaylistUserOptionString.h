// Class /Script/FortniteGame.PlaylistUserOptionString
// Size: 0x218
class UPlaylistUserOptionString : public UPlaylistUserOptionBase
{
	int EntryCharLimit; // 0x1d8 (0x4)
	bool bAllowLineBreaks; // 0x1dc (0x1)
	bool bAllowStyleEditing; // 0x1dd (0x1)
	unsigned char unreflected_1de[0x2]; // 0x1de (0x2) 
	struct FString DefaultValue; // 0x1e0 (0x10)
	bool bCanBeLocalized; // 0x1f0 (0x1)
	bool bShouldBeSanitized; // 0x1f1 (0x1)
	bool bShouldValidatePersistentID; // 0x1f2 (0x1)
	unsigned char unreflected_1f3[0x5]; // 0x1f3 (0x5) 
	struct FGameplayTagContainer GrantedContextTagsIfNotEmpty; // 0x1f8 (0x20)
};

