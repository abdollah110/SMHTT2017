ListFSAntuple=[
["mt","skim_MT_B","MiniAOD_Embed_mt/EmbeddingRun2016B-v2/"],
["mt","skim_MT_C","MiniAOD_Embed_mt/EmbeddingRun2016C-v2/"],
["mt","skim_MT_D","MiniAOD_Embed_mt/EmbeddingRun2016D-v2/"],
["mt","skim_MT_E","MiniAOD_Embed_mt/EmbeddingRun2016E-v2/"],
["mt","skim_MT_F","MiniAOD_Embed_mt/EmbeddingRun2016F-v2/"],
["mt","skim_MT_G","MiniAOD_Embed_mt/EmbeddingRun2016G-v2/"],
["mt","skim_MT_H","MiniAOD_Embed_mt/EmbeddingRun2016H-v2/"],
["et","skim_ET_B","MiniAOD_Embed_et/EmbeddingRun2016B-v2/"],
["et","skim_ET_C","MiniAOD_Embed_et/EmbeddingRun2016C-v2/"],
["et","skim_ET_D","MiniAOD_Embed_et/EmbeddingRun2016D-v2/"],
["et","skim_ET_E","MiniAOD_Embed_et/EmbeddingRun2016E-v2/"],
["et","skim_ET_F","MiniAOD_Embed_et/EmbeddingRun2016F-v2/"],
["et","skim_ET_G","MiniAOD_Embed_et/EmbeddingRun2016G-v2/"],
["et","skim_ET_H","MiniAOD_Embed_et/EmbeddingRun2016H-v2/"],
["tt","skim_TT_B","MiniAOD_Embed_tt/EmbeddingRun2016B-v2/"],
["tt","skim_TT_C","MiniAOD_Embed_tt/EmbeddingRun2016C-v2/"],
["tt","skim_TT_D","MiniAOD_Embed_tt/EmbeddingRun2016D-v2/"],
["tt","skim_TT_E","MiniAOD_Embed_tt/EmbeddingRun2016E-v2/"],
["tt","skim_TT_F","MiniAOD_Embed_tt/EmbeddingRun2016F-v2/"],
["tt","skim_TT_G","MiniAOD_Embed_tt/EmbeddingRun2016G-v2/"],
["tt","skim_TT_H","MiniAOD_Embed_tt/EmbeddingRun2016H-v3/"]
]

for i in range (0, len(ListFSAntuple)):
	print "python prepareScripts_"+ListFSAntuple[i][0]+".py", ListFSAntuple[i][1], "/hdfs/store/user/abdollah/"+ListFSAntuple[i][2], "/hdfs/store/user/abdollah/SkimEmbedded/"

