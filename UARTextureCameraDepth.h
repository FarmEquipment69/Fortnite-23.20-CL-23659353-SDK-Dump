// Class /Script/AugmentedReality.ARTextureCameraDepth
// Size: 0x170
class UARTextureCameraDepth : public UARTexture
{
	enum EARDepthQuality DepthQuality; // 0x168 (0x1)
	enum EARDepthAccuracy DepthAccuracy; // 0x169 (0x1)
	bool bIsTemporallySmoothed; // 0x16a (0x1)
	unsigned char padding_16b[0x5]; // 0x16b (0x5)
};

