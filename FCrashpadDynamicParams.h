// ScriptStruct /Script/FortniteGame.CrashpadDynamicParams
// Size: 0x60
struct FCrashpadDynamicParams
{
	class AActor* CollidingActor; // 0x0 (0x8)
	struct TMap<class AFortPawn*, float> TrackedPlayers; // 0x8 (0x50)
	bool bHitAnotherCrashpad; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	int CrashpadsBouncedOffOf; // 0x5c (0x4)
};

