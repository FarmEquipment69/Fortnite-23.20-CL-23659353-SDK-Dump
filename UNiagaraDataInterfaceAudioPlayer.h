// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
// Size: 0x88
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
	class USoundBase* SoundToPlay; // 0x38 (0x8)
	class USoundAttenuation* Attenuation; // 0x40 (0x8)
	class USoundConcurrency* Concurrency; // 0x48 (0x8)
	struct TArray<struct FName> ParameterNames; // 0x50 (0x10)
	struct FNiagaraUserParameterBinding ConfigurationUserParameter; // 0x60 (0x18)
	bool bLimitPlaysPerTick; // 0x78 (0x1)
	unsigned char unreflected_79[0x3]; // 0x79 (0x3) 
	int MaxPlaysPerTick; // 0x7c (0x4)
	bool bStopWhenComponentIsDestroyed; // 0x80 (0x1)
	bool bAllowLoopingOneShotSounds; // 0x81 (0x1)
	unsigned char padding_82[0x6]; // 0x82 (0x6)
};

