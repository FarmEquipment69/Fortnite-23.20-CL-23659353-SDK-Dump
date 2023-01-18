// Class /Script/FortniteGame.AutoFrameDronePawn
// Size: 0x4d0
class AAutoFrameDronePawn : public AHoverDronePawn
{
	unsigned char unreflected_440[0x20]; // 0x440 (0x20) 
	struct TArray<class AActor*> ActorsToTrack; // 0x460 (0x10)
	struct TMap<class AActor*, float> TrackedActorTimes; // 0x470 (0x50)
	unsigned char padding_4c0[0x10]; // 0x4c0 (0x10)
};

