// Class /Script/FortniteGame.FortAnimNotifyState_AudioComponentParameters
// Size: 0x48
class UFortAnimNotifyState_AudioComponentParameters : public UAnimNotifyState
{
	enum EFortNotifyAudioParamsStoreSource Source; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FName DataStoreName; // 0x34 (0x4)
	struct TArray<struct FFortBasicAudioParam*> AudioParams; // 0x38 (0x10)
};

