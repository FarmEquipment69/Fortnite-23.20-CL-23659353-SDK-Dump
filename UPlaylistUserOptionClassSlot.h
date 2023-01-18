// Class /Script/FortniteGame.PlaylistUserOptionClassSlot
// Size: 0x228
class UPlaylistUserOptionClassSlot : public UPlaylistUserOptionBase
{
	struct FCreativeClassOption* DefaultValue; // 0x1d8 (0x8)
	int MinClassSlot; // 0x1e0 (0x4)
	int MaxClassSlot; // 0x1e4 (0x4)
	struct FText ClassSlotDisplayPattern; // 0x1e8 (0x18)
	struct TArray<struct FPlaylistUserOptionClassTypeEntry> ClassTypeEntries; // 0x200 (0x10)
	unsigned char padding_210[0x18]; // 0x210 (0x18)
};

