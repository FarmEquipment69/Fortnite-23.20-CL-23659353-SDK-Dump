// Class /Script/AudioSynesthesia.MeterSettings
// Size: 0x40
class UMeterSettings : public UAudioSynesthesiaSettings
{
	float AnalysisPeriod; // 0x28 (0x4)
	enum EMeterPeakType PeakMode; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	int MeterAttackTime; // 0x30 (0x4)
	int MeterReleaseTime; // 0x34 (0x4)
	int PeakHoldTime; // 0x38 (0x4)
	float ClippingThreshold; // 0x3c (0x4)
};

