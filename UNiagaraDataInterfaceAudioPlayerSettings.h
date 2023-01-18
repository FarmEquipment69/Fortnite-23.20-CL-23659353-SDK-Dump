// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayerSettings
// Size: 0x408
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{
	bool bOverrideConcurrency; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	class USoundConcurrency* Concurrency; // 0x30 (0x8)
	bool bOverrideAttenuationSettings; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FSoundAttenuationSettings AttenuationSettings; // 0x40 (0x3c8)
};

