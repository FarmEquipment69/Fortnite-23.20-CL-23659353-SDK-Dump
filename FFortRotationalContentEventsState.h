// ScriptStruct /Script/FortniteGame.FortRotationalContentEventsState
// Size: 0x140
struct FFortRotationalContentEventsState
{
	struct TSet<struct FName> ActiveStorefronts; // 0x0 (0x50)
	struct TSet<struct FName> ActiveEventFlags; // 0x50 (0x50)
	struct TMap<struct FName, double> EventNamedWeights; // 0xa0 (0x50)
	struct TSet<struct FDateTime*> ExpirationTimes; // 0xf0 (0x50)
};

