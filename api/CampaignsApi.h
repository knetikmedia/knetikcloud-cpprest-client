/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * CampaignsApi.h
 *
 * 
 */

#ifndef CampaignsApi_H_
#define CampaignsApi_H_


#include "ApiClient.h"

#include "CampaignResource.h"
#include "PageResource«CampaignResource».h"
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

class  CampaignsApi
{
public:
    CampaignsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~CampaignsApi();
    /// <summary>
    /// Add a challenge to a campaign
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the campaign</param>/// <param name="challengeId">The id of the challenge (optional)</param>
    pplx::task<void> addChallengeToCampaign(int64_t id, int64_t challengeId);
    /// <summary>
    /// Create a campaign
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="campaignResource">The campaign resource object (optional)</param>
    pplx::task<std::shared_ptr<CampaignResource>> createCampaign(std::shared_ptr<CampaignResource> campaignResource);
    /// <summary>
    /// Create a campaign template
    /// </summary>
    /// <remarks>
    /// Campaign Templates define a type of campaign and the properties they have
    /// </remarks>
    /// <param name="campaignTemplateResource">The campaign template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> createCampaignTemplate(std::shared_ptr<TemplateResource> campaignTemplateResource);
    /// <summary>
    /// Delete a campaign
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The campaign id</param>
    pplx::task<void> deleteCampaign(int64_t id);
    /// <summary>
    /// Delete a campaign template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deleteCampaignTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Returns a single campaign
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The campaign id</param>
    pplx::task<std::shared_ptr<CampaignResource>> getCampaign(int64_t id);
    /// <summary>
    /// List the challenges associated with a campaign
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The campaign id</param>/// <param name="filterStartDate">A comma separated string without spaces.  First value is the operator to search on, second value is the challenge start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)</param>/// <param name="filterEndDate">A comma separated string without spaces.  First value is the operator to search on, second value is the challenge end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«ChallengeResource»>> getCampaignChallenges(int64_t id, utility::string_t filterStartDate, utility::string_t filterEndDate, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get a single campaign template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<TemplateResource>> getCampaignTemplate(utility::string_t id);
    /// <summary>
    /// List and search campaign templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«TemplateResource»>> getCampaignTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// List and search campaigns
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterActive">Filter for campaigns that are active (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«CampaignResource»>> getCampaigns(bool filterActive, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Remove a challenge from a campaign
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="campaignId">The campaign id</param>/// <param name="id">The challenge id</param>
    pplx::task<void> removeChallengeFromCampaign(int64_t campaignId, int64_t id);
    /// <summary>
    /// Update a campaign
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The campaign id</param>/// <param name="campaignResource">The campaign resource object (optional)</param>
    pplx::task<std::shared_ptr<CampaignResource>> updateCampaign(int64_t id, std::shared_ptr<CampaignResource> campaignResource);
    /// <summary>
    /// Update an campaign template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="campaignTemplateResource">The campaign template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> updateCampaignTemplate(utility::string_t id, std::shared_ptr<TemplateResource> campaignTemplateResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* CampaignsApi_H_ */

