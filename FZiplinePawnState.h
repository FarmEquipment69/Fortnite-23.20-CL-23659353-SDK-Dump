// ScriptStruct /Script/FortniteGame.ZiplinePawnState
// Size: 0x48
struct FZiplinePawnState
{
	struct TWeakObjectPtr<class AFortAthenaZiplineBase> Zipline; // 0x0 (0x8)
	struct TWeakObjectPtr<class AFortAthenaZiplineBase> PreviousZipline; // 0x8 (0x8)
	struct TWeakObjectPtr<class UPrimitiveComponent> InteractComponent; // 0x10 (0x8)
	bool bIsZiplining; // 0x18 (0x1)
	bool bJumped; // 0x19 (0x1)
	bool bReachedEnd; // 0x1a (0x1)
	unsigned char unreflected_1b[0x1]; // 0x1b (0x1) 
	int AuthoritativeValue; // 0x1c (0x4)
	struct FVector SocketOffset; // 0x20 (0x18)
	float TimeZipliningBegan; // 0x38 (0x4)
	float TimeZipliningEndedFromJump; // 0x3c (0x4)
	struct FTimerHandle* RemoveZiplineFromIgnoreWhenMovingTimerHandle; // 0x40 (0x8)
};

