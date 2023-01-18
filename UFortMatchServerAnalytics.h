// Class /Script/FortniteGame.FortMatchServerAnalytics
// Size: 0x268
class UFortMatchServerAnalytics : public UFortMatchAnalytics
{
	unsigned char unreflected_160[0xc0]; // 0x160 (0xc0) 
	float PlayersNotCompletingPhasePercentage; // 0x220 (0x4)
	float PlayersDisconnectingUnexpectedlyPercentage; // 0x224 (0x4)
	unsigned char unreflected_228[0x10]; // 0x228 (0x10) 
	double MatchStartThreshold; // 0x238 (0x8)
	unsigned char unreflected_240[0x10]; // 0x240 (0x10) 
	bool bHttpRequestCompletedDelegateEnabled; // 0x250 (0x1)
	unsigned char unreflected_251[0x7]; // 0x251 (0x7) 
	struct TArray<struct FFortHttpRequestCompletedAnalyticsFilter> HttpRequestCompletedFilters; // 0x258 (0x10)
};

