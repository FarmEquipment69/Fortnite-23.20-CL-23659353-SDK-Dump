// ScriptStruct /Script/Engine.NetViewer
// Size: 0x48
struct FNetViewer
{
	class UNetConnection* Connection; // 0x0 (0x8)
	class AActor* InViewer; // 0x8 (0x8)
	class AActor* ViewTarget; // 0x10 (0x8)
	struct FVector ViewLocation; // 0x18 (0x18)
	struct FVector ViewDir; // 0x30 (0x18)
};

