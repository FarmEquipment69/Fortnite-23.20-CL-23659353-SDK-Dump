// ScriptStruct /Script/FortniteGame.IgnoredPlayerPawnArray
// Size: 0x120
struct FIgnoredPlayerPawnArray : FFastArraySerializer
{
	class AAthenaHoldingArea* OwningHoldingArea; // 0x108 (0x8)
	struct TArray<struct FIgnoredPlayerPawnDataEntry> IgnorePawnEntries; // 0x110 (0x10)
};

