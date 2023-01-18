// ScriptStruct /Script/FortniteGame.FortGliderLayeredAudioOneshotGate
// Size: 0x38
struct FFortGliderLayeredAudioOneshotGate
{
	struct TWeakObjectPtr<class USoundBase> SoundRef; // 0x0 (0x28)
	float GateValue; // 0x28 (0x4)
	enum ELayeredAudioTriggerDir Direction; // 0x2c (0x1)
	bool FadeWhenOutsideGate; // 0x2d (0x1)
	unsigned char unreflected_2e[0x2]; // 0x2e (0x2) 
	float MinTimeSinceTrigger; // 0x30 (0x4)
	float InterruptFadeTime; // 0x34 (0x4)
};

