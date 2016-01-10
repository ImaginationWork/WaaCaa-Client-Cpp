/*
This data is from https://www.manning.com/books/machine-learning-in-action Chapter 02 
*/
const char dataStrs[] = " \
40920	8.326976	0.953952	largeDoses\n\
14488	7.153469	1.673904	smallDoses\n\
26052	1.441871	0.805124	didntLike\n\
75136	13.147394	0.428964	didntLike\n\
38344	1.669788	0.134296	didntLike\n\
72993	10.141740	1.032955	didntLike\n\
35948	6.830792	1.213192	largeDoses\n\
42666	13.276369	0.543880	largeDoses\n\
67497	8.631577	0.749278	didntLike\n\
35483	12.273169	1.508053	largeDoses\n\
50242	3.723498	0.831917	didntLike\n\
63275	8.385879	1.669485	didntLike\n\
5569	4.875435	0.728658	smallDoses\n\
51052	4.680098	0.625224	didntLike\n\
77372	15.299570	0.331351	didntLike\n\
43673	1.889461	0.191283	didntLike\n\
61364	7.516754	1.269164	didntLike\n\
69673	14.239195	0.261333	didntLike\n\
15669	0.000000	1.250185	smallDoses\n\
28488	10.528555	1.304844	largeDoses\n\
6487	3.540265	0.822483	smallDoses\n\
37708	2.991551	0.833920	didntLike\n\
22620	5.297865	0.638306	smallDoses\n\
28782	6.593803	0.187108	largeDoses\n\
19739	2.816760	1.686209	smallDoses\n\
36788	12.458258	0.649617	largeDoses\n\
5741	0.000000	1.656418	smallDoses\n\
28567	9.968648	0.731232	largeDoses\n\
6808	1.364838	0.640103	smallDoses\n\
41611	0.230453	1.151996	didntLike\n\
36661	11.865402	0.882810	largeDoses\n\
43605	0.120460	1.352013	didntLike\n\
15360	8.545204	1.340429	largeDoses\n\
63796	5.856649	0.160006	didntLike\n\
10743	9.665618	0.778626	smallDoses\n\
70808	9.778763	1.084103	didntLike\n\
72011	4.932976	0.632026	didntLike\n\
5914	2.216246	0.587095	smallDoses\n\
14851	14.305636	0.632317	largeDoses\n\
33553	12.591889	0.686581	largeDoses\n\
44952	3.424649	1.004504	didntLike\n\
17934	0.000000	0.147573	smallDoses\n\
27738	8.533823	0.205324	largeDoses\n\
29290	9.829528	0.238620	largeDoses\n\
42330	11.492186	0.263499	largeDoses\n\
36429	3.570968	0.832254	didntLike\n\
39623	1.771228	0.207612	didntLike\n\
32404	3.513921	0.991854	didntLike\n\
27268	4.398172	0.975024	didntLike\n\
5477	4.276823	1.174874	smallDoses\n\
14254	5.946014	1.614244	smallDoses\n\
68613	13.798970	0.724375	didntLike\n\
41539	10.393591	1.663724	largeDoses\n\
7917	3.007577	0.297302	smallDoses\n\
21331	1.031938	0.486174	smallDoses\n\
8338	4.751212	0.064693	smallDoses\n\
5176	3.692269	1.655113	smallDoses\n\
18983	10.448091	0.267652	largeDoses\n\
68837	10.585786	0.329557	didntLike\n\
13438	1.604501	0.069064	smallDoses\n\
48849	3.679497	0.961466	didntLike\n\
12285	3.795146	0.696694	smallDoses\n\
7826	2.531885	1.659173	smallDoses\n\
5565	9.733340	0.977746	smallDoses\n\
10346	6.093067	1.413798	smallDoses\n\
1823	7.712960	1.054927	smallDoses\n\
9744	11.470364	0.760461	largeDoses\n\
16857	2.886529	0.934416	smallDoses\n\
39336	10.054373	1.138351	largeDoses\n\
65230	9.972470	0.881876	didntLike\n\
2463	2.335785	1.366145	smallDoses\n\
27353	11.375155	1.528626	largeDoses\n\
16191	0.000000	0.605619	smallDoses\n\
12258	4.126787	0.357501	smallDoses\n\
42377	6.319522	1.058602	didntLike\n\
25607	8.680527	0.086955	largeDoses\n\
77450	14.856391	1.129823	didntLike\n\
58732	2.454285	0.222380	didntLike\n\
46426	7.292202	0.548607	largeDoses\n\
32688	8.745137	0.857348	largeDoses\n\
64890	8.579001	0.683048	didntLike\n\
8554	2.507302	0.869177	smallDoses\n\
28861	11.415476	1.505466	largeDoses\n\
42050	4.838540	1.680892	didntLike\n\
32193	10.339507	0.583646	largeDoses\n\
64895	6.573742	1.151433	didntLike\n\
2355	6.539397	0.462065	smallDoses\n\
0	2.209159	0.723567	smallDoses\n\
70406	11.196378	0.836326	didntLike\n\
57399	4.229595	0.128253	didntLike\n\
41732	9.505944	0.005273	largeDoses\n\
11429	8.652725	1.348934	largeDoses\n\
75270	17.101108	0.490712	didntLike\n\
5459	7.871839	0.717662	smallDoses\n\
73520	8.262131	1.361646	didntLike\n\
40279	9.015635	1.658555	largeDoses\n\
21540	9.215351	0.806762	largeDoses\n\
17694	6.375007	0.033678	smallDoses\n\
22329	2.262014	1.022169	didntLike\n\
46570	5.677110	0.709469	didntLike\n\
42403	11.293017	0.207976	largeDoses\n\
33654	6.590043	1.353117	didntLike\n\
9171	4.711960	0.194167	smallDoses\n\
28122	8.768099	1.108041	largeDoses\n\
34095	11.502519	0.545097	largeDoses\n\
1774	4.682812	0.578112	smallDoses\n\
40131	12.446578	0.300754	largeDoses\n\
13994	12.908384	1.657722	largeDoses\n\
77064	12.601108	0.974527	didntLike\n\
11210	3.929456	0.025466	smallDoses\n\
6122	9.751503	1.182050	largeDoses\n\
15341	3.043767	0.888168	smallDoses\n\
44373	4.391522	0.807100	didntLike\n\
28454	11.695276	0.679015	largeDoses\n\
63771	7.879742	0.154263	didntLike\n\
9217	5.613163	0.933632	smallDoses\n\
69076	9.140172	0.851300	didntLike\n\
24489	4.258644	0.206892	didntLike\n\
16871	6.799831	1.221171	smallDoses\n\
39776	8.752758	0.484418	largeDoses\n\
5901	1.123033	1.180352	smallDoses\n\
40987	10.833248	1.585426	largeDoses\n\
7479	3.051618	0.026781	smallDoses\n\
38768	5.308409	0.030683	largeDoses\n\
4933	1.841792	0.028099	smallDoses\n\
32311	2.261978	1.605603	didntLike\n\
26501	11.573696	1.061347	largeDoses\n\
37433	8.038764	1.083910	largeDoses\n\
23503	10.734007	0.103715	largeDoses\n\
68607	9.661909	0.350772	didntLike\n\
27742	9.005850	0.548737	largeDoses\n\
11303	0.000000	0.539131	smallDoses\n\
0	5.757140	1.062373	smallDoses\n\
32729	9.164656	1.624565	largeDoses\n\
24619	1.318340	1.436243	didntLike\n\
42414	14.075597	0.695934	largeDoses\n\
20210	10.107550	1.308398	largeDoses\n\
33225	7.960293	1.219760	largeDoses\n\
54483	6.317292	0.018209	didntLike\n\
18475	12.664194	0.595653	largeDoses\n\
33926	2.906644	0.581657	didntLike\n\
43865	2.388241	0.913938	didntLike\n\
26547	6.024471	0.486215	largeDoses\n\
44404	7.226764	1.255329	largeDoses\n\
16674	4.183997	1.275290	smallDoses\n\
8123	11.850211	1.096981	largeDoses\n\
42747	11.661797	1.167935	largeDoses\n\
56054	3.574967	0.494666	didntLike\n\
10933	0.000000	0.107475	smallDoses\n\
18121	7.937657	0.904799	largeDoses\n\
11272	3.365027	1.014085	smallDoses\n\
16297	0.000000	0.367491	smallDoses\n\
28168	13.860672	1.293270	largeDoses\n\
40963	10.306714	1.211594	largeDoses\n\
31685	7.228002	0.670670	largeDoses\n\
55164	4.508740	1.036192	didntLike\n\
17595	0.366328	0.163652	smallDoses\n\
1862	3.299444	0.575152	smallDoses\n\
57087	0.573287	0.607915	didntLike\n\
63082	9.183738	0.012280	didntLike\n\
51213	7.842646	1.060636	largeDoses\n\
6487	4.750964	0.558240	smallDoses\n\
4805	11.438702	1.556334	largeDoses\n\
30302	8.243063	1.122768	largeDoses\n\
68680	7.949017	0.271865	didntLike\n\
17591	7.875477	0.227085	smallDoses\n\
74391	9.569087	0.364856	didntLike\n\
37217	7.750103	0.869094	largeDoses\n\
42814	0.000000	1.515293	didntLike\n\
14738	3.396030	0.633977	smallDoses\n\
19896	11.916091	0.025294	largeDoses\n\
14673	0.460758	0.689586	smallDoses\n\
32011	13.087566	0.476002	largeDoses\n\
58736	4.589016	1.672600	didntLike\n\
54744	8.397217	1.534103	didntLike\n\
29482	5.562772	1.689388	didntLike\n\
27698	10.905159	0.619091	largeDoses\n\
11443	1.311441	1.169887	smallDoses\n\
56117	10.647170	0.980141	largeDoses\n\
39514	0.000000	0.481918	didntLike\n\
26627	8.503025	0.830861	largeDoses\n\
16525	0.436880	1.395314	smallDoses\n\
24368	6.127867	1.102179	didntLike\n\
22160	12.112492	0.359680	largeDoses\n\
6030	1.264968	1.141582	smallDoses\n\
6468	6.067568	1.327047	smallDoses\n\
22945	8.010964	1.681648	largeDoses\n\
18520	3.791084	0.304072	smallDoses\n\
34914	11.773195	1.262621	largeDoses\n\
6121	8.339588	1.443357	smallDoses\n\
38063	2.563092	1.464013	didntLike\n\
23410	5.954216	0.953782	didntLike\n\
35073	9.288374	0.767318	largeDoses\n\
52914	3.976796	1.043109	didntLike\n\
16801	8.585227	1.455708	largeDoses\n\
9533	1.271946	0.796506	smallDoses\n\
16721	0.000000	0.242778	smallDoses\n\
5832	0.000000	0.089749	smallDoses\n\
44591	11.521298	0.300860	largeDoses\n\
10143	1.139447	0.415373	smallDoses\n\
21609	5.699090	1.391892	smallDoses\n\
23817	2.449378	1.322560	didntLike\n\
15640	0.000000	1.228380	smallDoses\n\
8847	3.168365	0.053993	smallDoses\n\
50939	10.428610	1.126257	largeDoses\n\
28521	2.943070	1.446816	didntLike\n\
32901	10.441348	0.975283	largeDoses\n\
42850	12.478764	1.628726	largeDoses\n\
13499	5.856902	0.363883	smallDoses\n\
40345	2.476420	0.096075	didntLike\n\
43547	1.826637	0.811457	didntLike\n\
70758	4.324451	0.328235	didntLike\n\
19780	1.376085	1.178359	smallDoses\n\
44484	5.342462	0.394527	didntLike\n\
54462	11.835521	0.693301	largeDoses\n\
20085	12.423687	1.424264	largeDoses\n\
42291	12.161273	0.071131	largeDoses\n\
47550	8.148360	1.649194	largeDoses\n\
11938	1.531067	1.549756	smallDoses\n\
40699	3.200912	0.309679	didntLike\n\
70908	8.862691	0.530506	didntLike\n\
73989	6.370551	0.369350	didntLike\n\
11872	2.468841	0.145060	smallDoses\n\
48463	11.054212	0.141508	largeDoses\n\
15987	2.037080	0.715243	smallDoses\n\
70036	13.364030	0.549972	didntLike\n\
32967	10.249135	0.192735	largeDoses\n\
63249	10.464252	1.669767	didntLike\n\
42795	9.424574	0.013725	largeDoses\n\
14459	4.458902	0.268444	smallDoses\n\
19973	0.000000	0.575976	smallDoses\n\
5494	9.686082	1.029808	largeDoses\n\
67902	13.649402	1.052618	didntLike\n\
25621	13.181148	0.273014	largeDoses\n\
27545	3.877472	0.401600	didntLike\n\
58656	1.413952	0.451380	didntLike\n\
7327	4.248986	1.430249	smallDoses\n\
64555	8.779183	0.845947	didntLike\n\
8998	4.156252	0.097109	smallDoses\n\
11752	5.580018	0.158401	smallDoses\n\
76319	15.040440	1.366898	didntLike\n\
27665	12.793870	1.307323	largeDoses\n\
67417	3.254877	0.669546	didntLike\n\
21808	10.725607	0.588588	largeDoses\n\
15326	8.256473	0.765891	smallDoses\n\
20057	8.033892	1.618562	largeDoses\n\
79341	10.702532	0.204792	didntLike\n\
15636	5.062996	1.132555	smallDoses\n\
35602	10.772286	0.668721	largeDoses\n\
28544	1.892354	0.837028	didntLike\n\
57663	1.019966	0.372320	didntLike\n\
78727	15.546043	0.729742	didntLike\n\
68255	11.638205	0.409125	didntLike\n\
14964	3.427886	0.975616	smallDoses\n\
21835	11.246174	1.475586	largeDoses\n\
7487	0.000000	0.645045	smallDoses\n\
8700	0.000000	1.424017	smallDoses\n\
26226	8.242553	0.279069	largeDoses\n\
65899	8.700060	0.101807	didntLike\n\
6543	0.812344	0.260334	smallDoses\n\
46556	2.448235	1.176829	didntLike\n\
71038	13.230078	0.616147	didntLike\n\
47657	0.236133	0.340840	didntLike\n\
19600	11.155826	0.335131	largeDoses\n\
37422	11.029636	0.505769	largeDoses\n\
1363	2.901181	1.646633	smallDoses\n\
26535	3.924594	1.143120	didntLike\n\
47707	2.524806	1.292848	didntLike\n\
38055	3.527474	1.449158	didntLike\n\
6286	3.384281	0.889268	smallDoses\n\
10747	0.000000	1.107592	smallDoses\n\
44883	11.898890	0.406441	largeDoses\n\
56823	3.529892	1.375844	didntLike\n\
68086	11.442677	0.696919	didntLike\n\
70242	10.308145	0.422722	didntLike\n\
11409	8.540529	0.727373	smallDoses\n\
67671	7.156949	1.691682	didntLike\n\
61238	0.720675	0.847574	didntLike\n\
17774	0.229405	1.038603	smallDoses\n\
53376	3.399331	0.077501	didntLike\n\
30930	6.157239	0.580133	didntLike\n\
28987	1.239698	0.719989	didntLike\n\
13655	6.036854	0.016548	smallDoses\n\
7227	5.258665	0.933722	smallDoses\n\
40409	12.393001	1.571281	largeDoses\n\
13605	9.627613	0.935842	smallDoses\n\
26400	11.130453	0.597610	largeDoses\n\
13491	8.842595	0.349768	largeDoses\n\
30232	10.690010	1.456595	largeDoses\n\
43253	5.714718	1.674780	largeDoses\n\
55536	3.052505	1.335804	didntLike\n\
8807	0.000000	0.059025	smallDoses\n\
25783	9.945307	1.287952	largeDoses\n\
22812	2.719723	1.142148	didntLike\n\
77826	11.154055	1.608486	didntLike\n\
38172	2.687918	0.660836	didntLike\n\
31676	10.037847	0.962245	largeDoses\n\
74038	12.404762	1.112080	didntLike\n\
44738	10.237305	0.633422	largeDoses\n\
17410	4.745392	0.662520	smallDoses\n\
5688	4.639461	1.569431	smallDoses\n\
36642	3.149310	0.639669	didntLike\n\
29956	13.406875	1.639194	largeDoses\n\
60350	6.068668	0.881241	didntLike\n\
23758	9.477022	0.899002	largeDoses\n\
25780	3.897620	0.560201	smallDoses\n\
11342	5.463615	1.203677	smallDoses\n\
36109	3.369267	1.575043	didntLike\n\
14292	5.234562	0.825954	smallDoses\n\
11160	0.000000	0.722170	smallDoses\n\
23762	12.979069	0.504068	largeDoses\n\
39567	5.376564	0.557476	didntLike\n\
25647	13.527910	1.586732	largeDoses\n\
14814	2.196889	0.784587	smallDoses\n\
73590	10.691748	0.007509	didntLike\n\
35187	1.659242	0.447066	didntLike\n\
49459	8.369667	0.656697	largeDoses\n\
31657	13.157197	0.143248	largeDoses\n\
6259	8.199667	0.908508	smallDoses\n\
33101	4.441669	0.439381	largeDoses\n\
27107	9.846492	0.644523	largeDoses\n\
17824	0.019540	0.977949	smallDoses\n\
43536	8.253774	0.748700	largeDoses\n\
67705	6.038620	1.509646	didntLike\n\
35283	6.091587	1.694641	largeDoses\n\
71308	8.986820	1.225165	didntLike\n\
31054	11.508473	1.624296	largeDoses\n\
52387	8.807734	0.713922	largeDoses\n\
40328	0.000000	0.816676	didntLike\n\
34844	8.889202	1.665414	largeDoses\n\
11607	3.178117	0.542752	smallDoses\n\
64306	7.013795	0.139909	didntLike\n\
32721	9.605014	0.065254	largeDoses\n\
33170	1.230540	1.331674	didntLike\n\
37192	10.412811	0.890803	largeDoses\n\
13089	0.000000	0.567161	smallDoses\n\
66491	9.699991	0.122011	didntLike\n\
15941	0.000000	0.061191	smallDoses\n\
4272	4.455293	0.272135	smallDoses\n\
48812	3.020977	1.502803	didntLike\n\
28818	8.099278	0.216317	largeDoses\n\
35394	1.157764	1.603217	didntLike\n\
71791	10.105396	0.121067	didntLike\n\
40668	11.230148	0.408603	largeDoses\n\
39580	9.070058	0.011379	largeDoses\n\
11786	0.566460	0.478837	smallDoses\n\
19251	0.000000	0.487300	smallDoses\n\
56594	8.956369	1.193484	largeDoses\n\
54495	1.523057	0.620528	didntLike\n\
11844	2.749006	0.169855	smallDoses\n\
45465	9.235393	0.188350	largeDoses\n\
31033	10.555573	0.403927	largeDoses\n\
16633	6.956372	1.519308	smallDoses\n\
13887	0.636281	1.273984	smallDoses\n\
52603	3.574737	0.075163	didntLike\n\
72000	9.032486	1.461809	didntLike\n\
68497	5.958993	0.023012	didntLike\n\
35135	2.435300	1.211744	didntLike\n\
26397	10.539731	1.638248	largeDoses\n\
7313	7.646702	0.056513	smallDoses\n\
91273	20.919349	0.644571	didntLike\n\
24743	1.424726	0.838447	didntLike\n\
31690	6.748663	0.890223	largeDoses\n\
15432	2.289167	0.114881	smallDoses\n\
58394	5.548377	0.402238	didntLike\n\
33962	6.057227	0.432666	didntLike\n\
31442	10.828595	0.559955	largeDoses\n\
31044	11.318160	0.271094	largeDoses\n\
29938	13.265311	0.633903	largeDoses\n\
9875	0.000000	1.496715	smallDoses\n\
51542	6.517133	0.402519	largeDoses\n\
11878	4.934374	1.520028	smallDoses\n\
69241	10.151738	0.896433	didntLike\n\
37776	2.425781	1.559467	didntLike\n\
68997	9.778962	1.195498	didntLike\n\
67416	12.219950	0.657677	didntLike\n\
59225	7.394151	0.954434	didntLike\n\
29138	8.518535	0.742546	largeDoses\n\
5962	2.798700	0.662632	smallDoses\n\
10847	0.637930	0.617373	smallDoses\n\
70527	10.750490	0.097415	didntLike\n\
9610	0.625382	0.140969	smallDoses\n\
64734	10.027968	0.282787	didntLike\n\
25941	9.817347	0.364197	largeDoses\n\
2763	0.646828	1.266069	smallDoses\n\
55601	3.347111	0.914294	didntLike\n\
31128	11.816892	0.193798	largeDoses\n\
5181	0.000000	1.480198	smallDoses\n\
69982	10.945666	0.993219	didntLike\n\
52440	10.244706	0.280539	largeDoses\n\
57350	2.579801	1.149172	didntLike\n\
57869	2.630410	0.098869	didntLike\n\
56557	11.746200	1.695517	largeDoses\n\
42342	8.104232	1.326277	largeDoses\n\
15560	12.409743	0.790295	largeDoses\n\
34826	12.167844	1.328086	largeDoses\n\
8569	3.198408	0.299287	smallDoses\n\
77623	16.055513	0.541052	didntLike\n\
78184	7.138659	0.158481	didntLike\n\
7036	4.831041	0.761419	smallDoses\n\
69616	10.082890	1.373611	didntLike\n\
21546	10.066867	0.788470	largeDoses\n\
36715	8.129538	0.329913	largeDoses\n\
20522	3.012463	1.138108	smallDoses\n\
42349	3.720391	0.845974	didntLike\n\
9037	0.773493	1.148256	smallDoses\n\
26728	10.962941	1.037324	largeDoses\n\
587	0.177621	0.162614	smallDoses\n\
48915	3.085853	0.967899	didntLike\n\
9824	8.426781	0.202558	smallDoses\n\
4135	1.825927	1.128347	smallDoses\n\
9666	2.185155	1.010173	smallDoses\n\
59333	7.184595	1.261338	didntLike\n\
36198	0.000000	0.116525	didntLike\n\
34909	8.901752	1.033527	largeDoses\n\
47516	2.451497	1.358795	didntLike\n\
55807	3.213631	0.432044	didntLike\n\
14036	3.974739	0.723929	smallDoses\n\
42856	9.601306	0.619232	largeDoses\n\
64007	8.363897	0.445341	didntLike\n\
59428	6.381484	1.365019	didntLike\n\
13730	0.000000	1.403914	smallDoses\n\
41740	9.609836	1.438105	largeDoses\n\
63546	9.904741	0.985862	didntLike\n\
30417	7.185807	1.489102	largeDoses\n\
69636	5.466703	1.216571	didntLike\n\
64660	0.000000	0.915898	didntLike\n\
14883	4.575443	0.535671	smallDoses\n\
7965	3.277076	1.010868	smallDoses\n\
68620	10.246623	1.239634	didntLike\n\
8738	2.341735	1.060235	smallDoses\n\
7544	3.201046	0.498843	smallDoses\n\
6377	6.066013	0.120927	smallDoses\n\
36842	8.829379	0.895657	largeDoses\n\
81046	15.833048	1.568245	didntLike\n\
67736	13.516711	1.220153	didntLike\n\
32492	0.664284	1.116755	didntLike\n\
39299	6.325139	0.605109	largeDoses\n\
77289	8.677499	0.344373	didntLike\n\
33835	8.188005	0.964896	largeDoses\n\
71890	9.414263	0.384030	didntLike\n\
32054	9.196547	1.138253	largeDoses\n\
38579	10.202968	0.452363	largeDoses\n\
55984	2.119439	1.481661	didntLike\n\
72694	13.635078	0.858314	didntLike\n\
42299	0.083443	0.701669	didntLike\n\
26635	9.149096	1.051446	largeDoses\n\
8579	1.933803	1.374388	smallDoses\n\
37302	14.115544	0.676198	largeDoses\n\
22878	8.933736	0.943352	largeDoses\n\
4364	2.661254	0.946117	smallDoses\n\
4985	0.988432	1.305027	smallDoses\n\
37068	2.063741	1.125946	didntLike\n\
41137	2.220590	0.690754	didntLike\n\
67759	6.424849	0.806641	didntLike\n\
11831	1.156153	1.613674	smallDoses\n\
34502	3.032720	0.601847	didntLike\n\
4088	3.076828	0.952089	smallDoses\n\
15199	0.000000	0.318105	smallDoses\n\
17309	7.750480	0.554015	largeDoses\n\
";