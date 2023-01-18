// ScriptStruct /Script/Engine.DebugTextInfo
// Size: 0x80
struct FDebugTextInfo
{
	class AActor* SrcActor; // 0x0 (0x8)
	struct FVector SrcActorOffset; // 0x8 (0x18)
	struct FVector SrcActorDesiredOffset; // 0x20 (0x18)
	struct FString DebugText; // 0x38 (0x10)
	float TimeRemaining; // 0x48 (0x4)
	float Duration; // 0x4c (0x4)
	struct FColor TextColor; // 0x50 (0x4)
	unsigned char bAbsoluteLocation; // 0x54 (0x1)
	unsigned char bKeepAttachedToActor; // 0x54 (0x1)
	unsigned char bDrawShadow; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	struct FVector OrigActorLocation; // 0x58 (0x18)
	class UFont* Font; // 0x70 (0x8)
	float FontScale; // 0x78 (0x4)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

