/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * CampaignsChallengesApi.h
 *
 * 
 */

#ifndef CampaignsChallengesApi_H_
#define CampaignsChallengesApi_H_


#include "ApiClient.h"

#include "ChallengeActivityResource.h"
#include "ChallengeEventResource.h"
#include "ChallengeResource.h"
#include "PageResource«BareChallengeActivityResource».h"
#include "PageResource«ChallengeEventResource».h"
#include "PageResource«ChallengeResource».h"
#include "PageResource«TemplateResource».h"
#include "Result.h"
#include "TemplateResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  CampaignsChallengesApi
{
public:
    CampaignsChallengesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~CampaignsChallengesApi();
    /// <summary>
    /// Create a challenge
    /// </summary>
    /// <remarks>
    /// Challenges do not run on their own.  They must be added to a campaign before events will spawn.
    /// </remarks>
    /// <param name="challengeResource">The challenge resource object (optional)</param>
    pplx::task<std::shared_ptr<ChallengeResource>> createChallenge(std::shared_ptr<ChallengeResource> challengeResource);
    /// <summary>
    /// Create a challenge activity
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="challengeId">The challenge id</param>/// <param name="challengeActivityResource">The challenge activity resource object (optional)</param>/// <param name="validateSettings">Whether to validate the settings being sent against the available settings on the base activity. (optional, default to false)</param>
    pplx::task<std::shared_ptr<ChallengeActivityResource>> createChallengeActivity(int64_t challengeId, std::shared_ptr<ChallengeActivityResource> challengeActivityResource, bool validateSettings);
    /// <summary>
    /// Create a challenge activity template
    /// </summary>
    /// <remarks>
    /// Challenge Activity Templates define a type of challenge activity and the properties they have
    /// </remarks>
    /// <param name="challengeActivityTemplateResource">The challengeActivity template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> createChallengeActivityTemplate(std::shared_ptr<TemplateResource> challengeActivityTemplateResource);
    /// <summary>
    /// Create a challenge template
    /// </summary>
    /// <remarks>
    /// Challenge Templates define a type of challenge and the properties they have
    /// </remarks>
    /// <param name="challengeTemplateResource">The challenge template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> createChallengeTemplate(std::shared_ptr<TemplateResource> challengeTemplateResource);
    /// <summary>
    /// Delete a challenge
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The challenge id</param>
    pplx::task<void> deleteChallenge(int64_t id);
    /// <summary>
    /// Delete a challenge activity
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="activityId">The activity id</param>/// <param name="challengeId">The challenge id</param>
    pplx::task<void> deleteChallengeActivity(int64_t activityId, int64_t challengeId);
    /// <summary>
    /// Delete a challenge activity template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deleteChallengeActivityTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Delete a challenge event
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The challenge event id</param>
    pplx::task<void> deleteChallengeEvent(int64_t id);
    /// <summary>
    /// Delete a challenge template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deleteChallengeTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Retrieve a challenge
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The challenge id</param>
    pplx::task<std::shared_ptr<ChallengeResource>> getChallenge(int64_t id);
    /// <summary>
    /// List and search challenge activities
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="challengeId">The challenge id</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«BareChallengeActivityResource»>> getChallengeActivities(int64_t challengeId, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get a single challenge activity
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="activityId">The activity id</param>
    pplx::task<std::shared_ptr<ChallengeActivityResource>> getChallengeActivity(int64_t activityId);
    /// <summary>
    /// Get a single challenge activity template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<TemplateResource>> getChallengeActivityTemplate(utility::string_t id);
    /// <summary>
    /// List and search challenge activity templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«TemplateResource»>> getChallengeActivityTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Retrieve a single challenge event details
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The challenge event id</param>
    pplx::task<std::shared_ptr<ChallengeEventResource>> getChallengeEvent(int64_t id);
    /// <summary>
    /// Retrieve a list of challenge events
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterStartDate">A comma separated string without spaces.  First value is the operator to search on, second value is the event start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)</param>/// <param name="filterEndDate">A comma separated string without spaces.  First value is the operator to search on, second value is the event end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)</param>/// <param name="filterCampaigns">check only for events from currently running campaigns (optional)</param>/// <param name="filterChallenge">check only for events from the challenge specified by id (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«ChallengeEventResource»>> getChallengeEvents(utility::string_t filterStartDate, utility::string_t filterEndDate, bool filterCampaigns, int64_t filterChallenge, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get a single challenge template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<TemplateResource>> getChallengeTemplate(utility::string_t id);
    /// <summary>
    /// List and search challenge templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«TemplateResource»>> getChallengeTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Retrieve a list of challenges
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterTemplate">Filter for challenges that are not tied to campaigns (templates) (optional)</param>/// <param name="filterActiveCampaign">Filter for challenges that are tied to active campaigns (optional)</param>
    pplx::task<std::shared_ptr<PageResource«ChallengeResource»>> getChallenges(bool filterTemplate, bool filterActiveCampaign);
    /// <summary>
    /// Update a challenge
    /// </summary>
    /// <remarks>
    /// If the challenge is a copy, changes will propagate to all the related challenges
    /// </remarks>
    /// <param name="id">The challenge id</param>/// <param name="challengeResource">The challenge resource object (optional)</param>
    pplx::task<std::shared_ptr<ChallengeResource>> updateChallenge(int64_t id, std::shared_ptr<ChallengeResource> challengeResource);
    /// <summary>
    /// Update a challenge activity
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="activityId">The activity id</param>/// <param name="challengeId">The challenge id</param>/// <param name="challengeActivityResource">The challenge activity resource object (optional)</param>
    pplx::task<std::shared_ptr<ChallengeActivityResource>> updateChallengeActivity(int64_t activityId, int64_t challengeId, std::shared_ptr<ChallengeActivityResource> challengeActivityResource);
    /// <summary>
    /// Update an challenge activity template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="challengeActivityTemplateResource">The challengeActivity template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> updateChallengeActivityTemplate(utility::string_t id, std::shared_ptr<TemplateResource> challengeActivityTemplateResource);
    /// <summary>
    /// Update a challenge template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="challengeTemplateResource">The challenge template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> updateChallengeTemplate(utility::string_t id, std::shared_ptr<TemplateResource> challengeTemplateResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* CampaignsChallengesApi_H_ */

