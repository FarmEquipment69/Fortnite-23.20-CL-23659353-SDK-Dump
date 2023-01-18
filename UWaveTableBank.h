// Class /Script/WaveTable.WaveTableBank
// Size: 0x48
class UWaveTableBank : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	enum EWaveTableResolution Resolution; // 0x30 (0x1)
	bool bBipolar; // 0x31 (0x1)
	unsigned char unreflected_32[0x6]; // 0x32 (0x6) 
	struct TArray<struct FWaveTableBankEntry> Entries; // 0x38 (0x10)
};

