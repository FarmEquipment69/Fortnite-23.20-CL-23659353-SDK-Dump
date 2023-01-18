// Class /Script/FortniteGame.FortInputRegistrySubsystem
// Size: 0x58
class UFortInputRegistrySubsystem : public ULocalPlayerSubsystem
{
	struct TArray<class UFortInputMappingContext*> RegisteredInputMappingContexts; // 0x30 (0x10)
	struct TArray<class UFortInputMappingContext*> ActivatedInputMappingContexts; // 0x40 (0x10)
	unsigned char padding_50[0x8]; // 0x50 (0x8)
};

