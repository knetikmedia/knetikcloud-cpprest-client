/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * GamificationAchievementsApi.h
 *
 * 
 */

#ifndef GamificationAchievementsApi_H_
#define GamificationAchievementsApi_H_


#include "ApiClient.h"

#include "AchievementDefinitionResource.h"
#include "BreTriggerResource.h"
#include "IntWrapper.h"
#include "PageResource«AchievementDefinitionResource».h"
#include "PageResource«TemplateResource».h"
#include "PageResource«UserAchievementGroupResource».h"
#include "Result.h"
#include "TemplateResource.h"
#include "UserAchievementGroupResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  GamificationAchievementsApi
{
public:
    GamificationAchievementsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~GamificationAchievementsApi();
    /// <summary>
    /// Create a new achievement definition
    /// </summary>
    /// <remarks>
    /// If the definition contains a trigger event name, a BRE rule is created, so that tracking logic is executed when the triggering event occurs. If no trigger event name is specified, the user&#39;s achievement status must manually be updated via the API.
    /// </remarks>
    /// <param name="achievement">The achievement definition (optional)</param>
    pplx::task<std::shared_ptr<AchievementDefinitionResource>> createAchievement(std::shared_ptr<AchievementDefinitionResource> achievement);
    /// <summary>
    /// Create an achievement template
    /// </summary>
    /// <remarks>
    /// Achievement templates define a type of achievement and the properties they have
    /// </remarks>
    /// <param name="template">The achievement template to be created (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> createAchievementTemplate(std::shared_ptr<TemplateResource> template);
    /// <summary>
    /// Delete an achievement definition
    /// </summary>
    /// <remarks>
    /// Will also disable the associated generated rule, if any.
    /// </remarks>
    /// <param name="name">The name of the achievement</param>
    pplx::task<void> deleteAchievement(utility::string_t name);
    /// <summary>
    /// Delete an achievement template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deleteAchievementTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Get a single achievement definition
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="name">The name of the achievement</param>
    pplx::task<std::shared_ptr<AchievementDefinitionResource>> getAchievement(utility::string_t name);
    /// <summary>
    /// Get a single achievement template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<TemplateResource>> getAchievementTemplate(utility::string_t id);
    /// <summary>
    /// List and search achievement templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«TemplateResource»>> getAchievementTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get the list of triggers that can be used to trigger an achievement progress update
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    
    pplx::task<std::vector<std::shared_ptr<BreTriggerResource>>> getAchievementTriggers();
    /// <summary>
    /// Get all achievement definitions in the system
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterTagset">Filter for achievements with specified tags (separated by comma) (optional)</param>/// <param name="filterName">Filter for achievements whose name contains a string (optional)</param>/// <param name="filterHidden">Filter for achievements that are hidden or not (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to name:ASC)</param>/// <param name="filterDerived">Filter for achievements that are derived from other services (optional, default to false)</param>
    pplx::task<std::shared_ptr<PageResource«AchievementDefinitionResource»>> getAchievements(utility::string_t filterTagset, utility::string_t filterName, bool filterHidden, int32_t size, int32_t page, utility::string_t order, bool filterDerived);
    /// <summary>
    /// Get a list of derived achievements
    /// </summary>
    /// <remarks>
    /// Used by other services that depend on achievements
    /// </remarks>
    /// <param name="name">The name of the derived achievement</param>
    pplx::task<std::vector<std::shared_ptr<AchievementDefinitionResource>>> getDerivedAchievements(utility::string_t name);
    /// <summary>
    /// Retrieve progress on a given achievement for a given user
    /// </summary>
    /// <remarks>
    /// Assets will not be filled in on the resources returned. Use &#39;Get a single poll&#39; to retrieve the full resource with assets for a given item as needed.
    /// </remarks>
    /// <param name="userId">The user&#39;s id</param>/// <param name="achievementName">The achievement&#39;s name</param>
    pplx::task<std::shared_ptr<UserAchievementGroupResource>> getUserAchievementProgress(int32_t userId, utility::string_t achievementName);
    /// <summary>
    /// Retrieve progress on achievements for a given user
    /// </summary>
    /// <remarks>
    /// Assets will not be filled in on the resources returned. Use &#39;Get a single poll&#39; to retrieve the full resource with assets for a given item as needed.
    /// </remarks>
    /// <param name="userId">The user&#39;s id</param>/// <param name="filterAchievementDerived">Filter for achievements that are derived from other services (optional)</param>/// <param name="filterAchievementTagset">Filter for achievements with specified tags (separated by comma) (optional)</param>/// <param name="filterAchievementName">Filter for achievements whose name contains a string (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«UserAchievementGroupResource»>> getUserAchievementsProgress(int32_t userId, bool filterAchievementDerived, utility::string_t filterAchievementTagset, utility::string_t filterAchievementName, int32_t size, int32_t page);
    /// <summary>
    /// Retrieve progress on a given achievement for all users
    /// </summary>
    /// <remarks>
    /// Assets will not be filled in on the resources returned. Use &#39;Get single achievement progress for user&#39; to retrieve the full resource with assets for a given user as needed.
    /// </remarks>
    /// <param name="achievementName">The achievement&#39;s name</param>/// <param name="filterAchievementDerived">Filter for achievements that are derived from other services (optional)</param>/// <param name="filterAchievementTagset">Filter for achievements with specified tags (separated by comma) (optional)</param>/// <param name="filterAchievementName">Filter for achievements whose name contains a string (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«UserAchievementGroupResource»>> getUsersAchievementProgress(utility::string_t achievementName, bool filterAchievementDerived, utility::string_t filterAchievementTagset, utility::string_t filterAchievementName, int32_t size, int32_t page);
    /// <summary>
    /// Retrieve progress on achievements for all users
    /// </summary>
    /// <remarks>
    /// Assets will not be filled in on the resources returned. Use &#39;Get single achievement progress for user&#39; to retrieve the full resource with assets for a given user as needed.
    /// </remarks>
    /// <param name="filterAchievementDerived">Filter for achievements that are derived from other services (optional)</param>/// <param name="filterAchievementTagset">Filter for achievements with specified tags (separated by comma) (optional)</param>/// <param name="filterAchievementName">Filter for achievements whose name contains a string (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«UserAchievementGroupResource»>> getUsersAchievementsProgress(bool filterAchievementDerived, utility::string_t filterAchievementTagset, utility::string_t filterAchievementName, int32_t size, int32_t page);
    /// <summary>
    /// Increment an achievement progress record for a user
    /// </summary>
    /// <remarks>
    /// If no progress record yet exists for the user, it will be created. Otherwise it will be updated and the provided value added to the existing progress. May be negative. If progress meets or exceeds the achievement&#39;s max_value it will be marked as earned and a BRE event will be triggered for the &lt;code&gt;BreAchievementEarnedTrigger&lt;/code&gt;.
    /// </remarks>
    /// <param name="userId">The user&#39;s id</param>/// <param name="achievementName">The achievement&#39;s name</param>/// <param name="progress">The amount to add to the progress value (optional)</param>
    pplx::task<std::shared_ptr<UserAchievementGroupResource>> incrementAchievementProgress(int32_t userId, utility::string_t achievementName, std::shared_ptr<IntWrapper> progress);
    /// <summary>
    /// Set an achievement progress record for a user
    /// </summary>
    /// <remarks>
    /// If no progress record yet exists for the user, it will be created. Otherwise it will be updated and progress set to the provided value. If progress meets or exceeds the achievement&#39;s max_value it will be marked as earned and a BRE event will be triggered for the &lt;code&gt;BreAchievementEarnedTrigger&lt;/code&gt;.
    /// </remarks>
    /// <param name="userId">The user&#39;s id</param>/// <param name="achievementName">The achievement&#39;s name</param>/// <param name="progress">The new progress value (optional)</param>
    pplx::task<std::shared_ptr<UserAchievementGroupResource>> setAchievementProgress(int32_t userId, utility::string_t achievementName, std::shared_ptr<IntWrapper> progress);
    /// <summary>
    /// Update an achievement definition
    /// </summary>
    /// <remarks>
    /// The existing generated rule, if any, will be deleted. A new rule will be created if a trigger event name is specified in the new version.
    /// </remarks>
    /// <param name="name">The name of the achievement</param>/// <param name="achievement">The achievement definition (optional)</param>
    pplx::task<std::shared_ptr<AchievementDefinitionResource>> updateAchievement(utility::string_t name, std::shared_ptr<AchievementDefinitionResource> achievement);
    /// <summary>
    /// Update an achievement template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="template">The updated template (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> updateAchievementTemplate(utility::string_t id, std::shared_ptr<TemplateResource> template);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* GamificationAchievementsApi_H_ */

