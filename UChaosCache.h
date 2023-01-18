// Class /Script/ChaosCaching.ChaosCache
// Size: 0x250
class UChaosCache : public UObject
{
	float RecordedDuration; // 0x28 (0x4)
	uint32_t NumRecordedFrames; // 0x2c (0x4)
	struct TArray<int> TrackToParticle; // 0x30 (0x10)
	struct TArray<struct FPerParticleCacheData> ParticleTracks; // 0x40 (0x10)
	struct TMap<struct FName, struct FRichCurves> ChannelsTracks; // 0x50 (0x50)
	struct TMap<struct FName, struct FRichCurve> CurveData; // 0xa0 (0x50)
	struct TMap<struct FName, struct FCacheEventTrack> EventTracks; // 0xf0 (0x50)
	struct FCacheSpawnableTemplate Spawnable; // 0x140 (0xd0)
	struct FGuid AdapterGuid; // 0x210 (0x10)
	int Version; // 0x220 (0x4)
	unsigned char padding_224[0x2c]; // 0x224 (0x2c)
};

