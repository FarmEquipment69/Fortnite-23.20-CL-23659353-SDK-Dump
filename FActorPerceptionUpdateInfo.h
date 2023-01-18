// ScriptStruct /Script/AIModule.ActorPerceptionUpdateInfo
// Size: 0x60
struct FActorPerceptionUpdateInfo
{
	int TargetId; // 0x0 (0x4)
	struct TWeakObjectPtr<class AActor> Target; // 0x4 (0x8)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FAIStimulus Stimulus; // 0x10 (0x50)
};

