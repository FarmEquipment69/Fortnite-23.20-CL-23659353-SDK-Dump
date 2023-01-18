// ScriptStruct /Script/FortniteGame.FortSpectatorZoneArray
// Size: 0x120
struct FFortSpectatorZoneArray : FFastArraySerializer
{
	struct TArray<struct FFortSpectatorZoneItem> SpectatorArray; // 0x108 (0x10)
	class AFortPlayerStateZone* OwningState; // 0x118 (0x8)
};

