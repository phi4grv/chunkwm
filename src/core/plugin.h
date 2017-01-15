#ifndef CHUNKWM_CORE_PLUGIN_H
#define CHUNKWM_CORE_PLUGIN_H

#include <map>
#include "../api/plugin_api.h"

typedef std::map<plugin *, bool>  plugin_list;
typedef std::map<plugin *, bool>::iterator plugin_list_iter;

bool BeginPlugins();

plugin_list *BeginPluginList(chunkwm_plugin_export Export);
void EndPluginList(chunkwm_plugin_export Export);

#endif
