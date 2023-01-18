// ScriptStruct /Script/Niagara.NiagaraSimCacheFrame
// Size: 0x110
struct FNiagaraSimCacheFrame
{
	struct FTransform LocalToWorld; // 0x0 (0x60)
	struct FVector3f LWCTile; // 0x60 (0xc)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FNiagaraSimCacheSystemFrame SystemData; // 0x70 (0x88)
	struct TArray<struct FNiagaraSimCacheEmitterFrame> EmitterData; // 0xf8 (0x10)
	unsigned char padding_108[0x8]; // 0x108 (0x8)
};

