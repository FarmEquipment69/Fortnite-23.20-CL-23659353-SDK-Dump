// Class /Script/FortniteGame.PlaylistUserOptionTeamIndex
// Size: 0x228
class UPlaylistUserOptionTeamIndex : public UPlaylistUserOptionBase
{
	struct FCreativeTeamOption* DefaultValue; // 0x1d8 (0x8)
	int MinTeamIndex; // 0x1e0 (0x4)
	int MaxTeamIndex; // 0x1e4 (0x4)
	struct FText TeamIndexDisplayPattern; // 0x1e8 (0x18)
	struct TArray<struct FPlaylistUserOptionTeamTypeEntry> TeamTypeEntries; // 0x200 (0x10)
	unsigned char padding_210[0x18]; // 0x210 (0x18)
};

