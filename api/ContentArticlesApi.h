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
 * ContentArticlesApi.h
 *
 * 
 */

#ifndef ContentArticlesApi_H_
#define ContentArticlesApi_H_


#include "ApiClient.h"

#include "ArticleResource.h"
#include "PageResource«ArticleResource».h"
#include "PageResource«TemplateResource».h"
#include "Result.h"
#include "TemplateResource.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  ContentArticlesApi
{
public:
    ContentArticlesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~ContentArticlesApi();
    /// <summary>
    /// Create a new article
    /// </summary>
    /// <remarks>
    /// Articles are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.
    /// </remarks>
    /// <param name="articleResource">The new article (optional)</param>
    pplx::task<std::shared_ptr<ArticleResource>> createArticle(std::shared_ptr<ArticleResource> articleResource);
    /// <summary>
    /// Create an article template
    /// </summary>
    /// <remarks>
    /// Article Templates define a type of article and the properties they have
    /// </remarks>
    /// <param name="articleTemplateResource">The article template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> createArticleTemplate(std::shared_ptr<TemplateResource> articleTemplateResource);
    /// <summary>
    /// Delete an existing article
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The article id</param>
    pplx::task<void> deleteArticle(utility::string_t id);
    /// <summary>
    /// Delete an article template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deleteArticleTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Get a single article
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The article id</param>
    pplx::task<std::shared_ptr<ArticleResource>> getArticle(utility::string_t id);
    /// <summary>
    /// Get a single article template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<TemplateResource>> getArticleTemplate(utility::string_t id);
    /// <summary>
    /// List and search article templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«TemplateResource»>> getArticleTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// List and search articles
    /// </summary>
    /// <remarks>
    /// Get a list of articles with optional filtering. Assets will not be filled in on the resources returned. Use &#39;Get a single article&#39; to retrieve the full resource with assets for a given item as needed.
    /// </remarks>
    /// <param name="filterCategory">Filter for articles from a specific category by id (optional)</param>/// <param name="filterTagset">Filter for articles with specified tags (separated by comma) (optional)</param>/// <param name="filterTitle">Filter for articles whose title contains a string (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«ArticleResource»>> getArticles(utility::string_t filterCategory, utility::string_t filterTagset, utility::string_t filterTitle, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Update an existing article
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The article id</param>/// <param name="articleResource">The article object (optional)</param>
    pplx::task<std::shared_ptr<ArticleResource>> updateArticle(utility::string_t id, std::shared_ptr<ArticleResource> articleResource);
    /// <summary>
    /// Update an article template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="articleTemplateResource">The article template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> updateArticleTemplate(utility::string_t id, std::shared_ptr<TemplateResource> articleTemplateResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ContentArticlesApi_H_ */

