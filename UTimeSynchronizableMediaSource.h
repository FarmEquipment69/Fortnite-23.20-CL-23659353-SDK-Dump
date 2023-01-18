// Class /Script/MediaAssets.TimeSynchronizableMediaSource
// Size: 0xa0
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
	bool bUseTimeSynchronization; // 0x88 (0x1)
	unsigned char unreflected_89[0x3]; // 0x89 (0x3) 
	int FrameDelay; // 0x8c (0x4)
	double TimeDelay; // 0x90 (0x8)
	bool bAutoDetectInput; // 0x98 (0x1)
	unsigned char padding_99[0x7]; // 0x99 (0x7)
};

