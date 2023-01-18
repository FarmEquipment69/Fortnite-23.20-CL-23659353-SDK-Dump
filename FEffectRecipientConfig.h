// ScriptStruct /Script/FortniteGame.EffectRecipientConfig
// Size: 0x18
struct FEffectRecipientConfig
{
	enum EDataDrivenEffectRecipient Recipient; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<class UFortControllerEffect*> Effects; // 0x8 (0x10)
};

