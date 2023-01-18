// ScriptStruct /Script/FortniteGame.PlayerLoadout
// Size: 0x48
struct FPlayerLoadout
{
	struct TArray<struct FPlayerLoudoutEntry> AlwaysGrantedLoadoutItems; // 0x0 (0x10)
	struct TArray<struct FRandomItemEntries> RandomlyGrantedLoadoutItems; // 0x10 (0x10)
	struct FScalableFloat LoadoutDuration; // 0x20 (0x28)
};

