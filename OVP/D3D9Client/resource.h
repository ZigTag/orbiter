#include <commctrl.h>
// Fix Microsoft Visual Studio Version 2012 resource compiler RC4011 warnings.
// Instead of #include <Richedit.h>
#if defined(RC_INVOKED)
#ifndef RICHEDIT_CLASS
#ifdef UNICODE
#define RICHEDIT_CLASS  L"RichEdit20W"
#else
#define RICHEDIT_CLASS  "RichEdit20A"
#endif // UNICODE
#endif // !RICHEDIT_CLASS
#endif // RC_INVOKED


#ifndef IDC_STATIC
#define IDC_STATIC (-1)
#endif

#define IDS_INFO                                1000 // never change these!
#define IDS_TYPE                                1001 //   "      "     "
#define IDD_D3D9CREDITS                         101
#define IDD_D3D9MESHDEBUG                       102
#define IDD_D3D9SCATTER                         103
#define IDD_D3D9SETUP                           104
#define IDD_DEBUGVIEW                           105
#define IDD_MESHDEBUG                           106
#define IDD_MATERIAL                            107
#define IDD_MICROTEXTOOLS                       108
#define IDD_SCENEDEBUG                          109
#define IDD_GRAPHICS                            110
#define IDB_BITMAP1                             111
#define IDC_AA                                  2002
#define IDC_AF                                  2003
#define IDC_ATM_LOAD                            2034
#define IDC_ATM_MODE                            2036
#define IDC_ATM_SAVE                            2044
#define IDC_BASEVIS                             2045
#define IDC_CONVERGENCE                         2046
#define IDC_CONV_DSP                            2047
#define IDC_CREDITS                             2048
#define IDC_CREDITSTEXT                         2049
#define IDC_DBG_ALPHA                           2050
#define IDC_DBG_AMBIENT                         2051
#define IDC_DBG_BLUE                            2052
#define IDC_DBG_BOXES                           2053
#define IDC_DBG_CAMERA                          2054
#define IDC_DBG_COPY                            2055
#define IDC_DBG_DISPLAY                         2056
#define IDC_DBG_DUAL                            2057
#define IDC_DBG_ENVMAP                          2058
#define IDC_DBG_FPSLIM                          2059
#define IDC_DBG_GREEN                           2060
#define IDC_DBG_GROUP                           2061
#define IDC_DBG_GRPDN                           2062
#define IDC_DBG_GRPO                            2063
#define IDC_DBG_GRPUP                           2064
#define IDC_DBG_HSG                             2065
#define IDC_DBG_HSM                             2066
#define IDC_DBG_LINK                            2067
#define IDC_DBG_MATADJ                          2068
#define IDC_DBG_MATGRP                          2070
#define IDC_DBG_MATPRP                          2071
#define IDC_DBG_MATSAVE                         2072
#define IDC_DBG_MESH                            2073
#define IDC_DBG_MESHNAME                        2074
#define IDC_DBG_MSHDN                           2075
#define IDC_DBG_MSHO                            2076
#define IDC_DBG_MSHUP                           2077
#define IDC_DBG_PASTE                           2078
#define IDC_DBG_PICK                            2079
#define IDC_DBG_RED                             2080
#define IDC_DBG_SPEED                           2083
#define IDC_DBG_SPEEDDSP                        2084
#define IDC_DBG_SPHERES                         2085
#define IDC_DBG_TEXTURE                         2086
#define IDC_DBG_VISO                            2088
#define IDC_DBG_VISUAL                          2089
#define IDC_DBG_WIRE                            2090
#define IDC_DEBUG                               2091
#define IDC_DEMAND                              2092
#define IDC_ENVFACES                            2094
#define IDC_ENVMODE                             2095
#define IDC_FONT                                2096
#define IDC_MIPMAPS                             2097
#define IDC_GLASSSHADE                          2098
#define IDC_HZ                                  2099
#define IDC_LODBIAS                             2100
#define IDC_MESH_DEBUGGER                       2101
#define IDC_NEARPLANE                           2102
#define IDC_NORMALMAPS                          2103
#define IDC_PLANETGLOW                          2104
#define IDC_SEPARATION                          2105
#define IDC_SEPA_DSP                            2106
#define IDC_SRFPRELOAD                          2107
#define IDC_SYMBOLIC                            2108
#define IDC_ATM_COPYTO                          2109
#define IDC_CAMMODE                             2110
#define IDC_MESHRES                             2111
#define IDC_TEXMIPS                             2112
#define IDC_MICROMODE                           2113
#define IDC_MICROFILTER                         2114
#define IDC_DBG_MORE                            2115
#define IDC_DBG_SCENEDBG                        2116
#define IDC_BLENDMODE                           2118
#define IDC_DBG_OPEN                            2119
#define IDC_DBG_EXECUTE                         2120
#define IDC_DBG_ACTION                          2121
#define IDC_DBG_FILE                            2122
#define IDC_MICROBIAS                           2123
#define IDC_DBG_TARGET                          2125
#define IDC_DBG_VARA                            2126
#define IDC_DBG_VARB                            2127
#define IDC_DBG_VARC                            2128
#define IDC_DBG_NORM                            2129
#define IDC_DBG_FADE                            2130
#define IDC_DBG_SEAMS                           2131
#define IDC_DBG_TILEBB                          2132
#define IDC_DBG_RESBIAS                         2136
#define IDC_DBG_ENVSAVE                         2139
#define IDC_POSTPROCESS                         2140
#define IDC_ARCHIVE                             2142
#define IDC_DBG_GROUPSTAT                       2143
#define IDC_DBG_DEFINED                         2145
#define IDC_DBG_DATAWND                         2154
#define IDC_DBG_DATAVIEW                        2155
#define IDC_LIGHTCONFIG                         2156
#define IDC_DBG_KERNEL                          2157
#define IDC_SELFSHADOWS                         2158
#define IDC_SHADOWFILTER                        2159
#define IDC_TERRAIN                             2160
#define IDC_CLOUDMICRO                          2161
#define IDC_GDIOVERLAY                          2162
#define IDC_GUIMODE                             2163
#define IDC_ABSANIM                             2164
#define IDC_CLOUDNORM                           2165
#define IDC_FLATS                               2166
#define IDC_DBG_DEFSHADER                       2167
#define IDC_DBG_DATAVIEW2                       2168
#define IDC_DBG_MESHGRP                         2169
#define IDC_GFX_INTENSITY                       2170
#define IDC_GFX_DISTANCE                        2171
#define IDC_GFX_GAMMA                           2173
#define IDC_GFX_VAL1                            2174
#define IDC_GFX_VAL2                            2175
#define IDC_GFX_VAL3                            2176
#define IDC_GFX_VAL4                            2177
#define IDC_GFX_INTENSITY_RESET                 2178
#define IDC_GFX_DISTANCE_RESET                  2179
#define IDC_GFX_GAMMA_RESET                     2181
#define IDC_DBG_EXTEND                          2183
#define IDC_DBG_RELOADSHD                       2184
#define IDC_GFX_SUNLIGHT                        2185
#define IDC_GFX_SUNLIGHT_RESET                  2186
#define IDC_GFX_IRRADIANCE                      2187
#define IDC_GFX_LOCALMAX                        2188
#define IDC_GFX_IRRADIANCE_RESET                2189
#define IDC_GFX_LOCALMAX_RESET                  2190
#define IDC_GFX_VAL5                            2191
#define IDC_GFX_VAL6                            2192
#define IDC_GFX_VAL7                            2193
#define IDC_GFX_THRESHOLD                       2194
#define IDC_GFX_THRESHOLD_RESET                 2195
#define IDC_DBG_CONES                           2196
#define IDC_DBG_RELOADTEX                       2197
#define IDC_BREAK                               2198
#define IDC_ATM_DISPLAY                         3012
#define IDC_ATM_COPYLOW                         3019
#define IDC_ATM_COPYHIGH                        3020
#define IDC_GFX_GLARE                           3025
#define IDC_GFX_VAL8                            3026
#define IDC_GFX_GLARE_RESET                     3027
#define IDC_GFX_RECOMPILE                       3028
#define IDC_DBG_EXPTEX                          3029
#define IDC_ESUNGLARE                           3030
#define IDC_ELIGHTSGLARE                        3031
#define IDC_EIRRAD                              3032
#define IDC_EARTHVISCFG                         3033
#define IDC_ESCACHE                             3034
#define IDC_EAQUALITY                           3035
#define IDC_ATM_S1                              4000
#define IDC_ATM_S2                              4001
#define IDC_ATM_S3                              4002
#define IDC_ATM_S4                              4003
#define IDC_ATM_S5                              4004
#define IDC_ATM_S6                              4005
#define IDC_ATM_S7                              4006
#define IDC_ATM_S8                              4007
#define IDC_ATM_S9                              4008
#define IDC_ATM_S10                             4009
#define IDC_ATM_S11                             4010
#define IDC_ATM_S12                             4011
#define IDC_ATM_S13                             4012
#define IDC_ATM_S14                             4013
#define IDC_ATM_S15                             4014
#define IDC_ATM_S16                             4015
#define IDC_ATM_S17                             4016
#define IDC_ATM_S18                             4017
#define IDC_ATM_S19                             4018
#define IDC_ATM_S20                             4019
#define IDC_ATD_S1                              4020
#define IDC_ATD_S2                              4021
#define IDC_ATD_S3                              4022
#define IDC_ATD_S4                              4023
#define IDC_ATD_S5                              4024
#define IDC_ATD_S6                              4025
#define IDC_ATD_S7                              4026
#define IDC_ATD_S8                              4027
#define IDC_ATD_S9                              4028
#define IDC_ATD_S10                             4029
#define IDC_ATD_S11                             4030
#define IDC_ATD_S12                             4031
#define IDC_ATD_S13                             4032
#define IDC_ATD_S14                             4033
#define IDC_ATD_S15                             4034
#define IDC_ATD_S16                             4035
#define IDC_ATD_S17                             4036
#define IDC_ATD_S18                             4037
#define IDC_ATD_S19                             4038
#define IDC_ATD_S20                             4039
#define IDC_ATL_S1                              4040
#define IDC_ATL_S2                              4041
#define IDC_ATL_S3                              4042
#define IDC_ATL_S4                              4043
#define IDC_ATL_S5                              4044
#define IDC_ATL_S6                              4045
#define IDC_ATL_S7                              4046
#define IDC_ATL_S8                              4047
#define IDC_ATL_S9                              4048
#define IDC_ATL_S10                             4049
#define IDC_ATL_S11                             4050
#define IDC_ATL_S12                             4051
#define IDC_ATL_S13                             4052
#define IDC_ATL_S14                             4053
#define IDC_ATL_S15                             4054
#define IDC_ATL_S16                             4055
#define IDC_ATL_S17                             4056
#define IDC_ATL_S18                             4057
#define IDC_ATL_S19                             4058
#define IDC_ATL_S20                             4059
#define IDC_ATG1                                4060
#define IDC_ATG2                                4061
#define IDC_ATG3                                4062
#define IDC_ATG4                                4063
#define IDC_ATG5                                4064
#define IDC_ATG6                                4065
#define IDC_ATM_PAGE                            4066
